#include <stdio.h>

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;

            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    return i + 1;
}

void quickSort(int a[], int low, int high, int n)
{
    if (low < high)
    {
        int pi = partition(a, low, high);

        printf("After partition with pivot %d: ", a[pi]);
        display(a, n);

        quickSort(a, low, pi - 1, n);
        quickSort(a, pi + 1, high, n);
    }
}

int main()
{
    int n;

    printf("Enter number of patients: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter severity scores:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nInitial array: ");
    display(a, n);

    quickSort(a, 0, n - 1, n);

    printf("\nSorted severity scores: ");
    display(a, n);

    return 0;
}