#include <stdio.h>

void heapify(int a[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i)
    {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    printf("\nMax Heap: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    
    for (int i = n - 1; i > 0; i--)
    {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);

        printf("\nAfter extraction: ");
        for (int j = 0; j < n; j++)
            printf("%d ", a[j]);
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

    heapSort(a, n);

    printf("\n\nSorted severity scores: ");

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}