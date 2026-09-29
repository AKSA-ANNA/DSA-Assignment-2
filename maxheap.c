#include <stdio.h>

#define MAX 100

int heap[MAX];
int n = 0;

void insert(int value)
{
    int i = n;

    heap[n] = value;
    n++;

    while (i > 0)
    {
        int parent = (i - 1) / 2;

        if (heap[parent] >= heap[i])
            break;

        int temp = heap[parent];
        heap[parent] = heap[i];
        heap[i] = temp;

        i = parent;
    }
}

void display()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main()
{
    int size, value;

    printf("Enter number of patients: ");
    scanf("%d", &size);

    printf("Enter severity scores:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &value);

        insert(value);

        printf("After inserting %d: ", value);
        display();
    }

    printf("\nFinal Max Heap: ");
    display();

    return 0;
}