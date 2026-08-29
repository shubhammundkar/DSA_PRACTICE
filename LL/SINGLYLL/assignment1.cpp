#include <stdio.h>

#define MAX 100

void readArray(int a[], int *n, int *sorted)
{
    printf("Enter number of elements: ");
    scanf("%d", n);

    printf("Enter elements:\n");
    for(int i = 0; i < *n; i++)
    {
        scanf("%d", &a[i]);
    }

    *sorted = 0;
}

void printArray(int a[], int n)
{
    printf("Array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void linearSearch(int a[], int n)
{
    int x, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found\n");
}

void insertionSort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void bubbleSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;

        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
                min = j;
        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void merge(int a[], int low, int mid, int high)
{
    int temp[MAX];
    int i = low, j = mid + 1, k = low;

    while(i <= mid && j <= high)
    {
        if(a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while(i <= mid)
        temp[k++] = a[i++];

    while(j <= high)
        temp[k++] = a[j++];

    for(i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;

    for(int j = low; j < high; j++)
    {
        if(a[j] < pivot)
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

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

void binarySearch(int a[], int n)
{
    int x;

    printf("Enter element to search: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(a[mid] == x)
        {
            printf("Element found at index %d\n", mid);
            return;
        }
        else if(x < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    printf("Element not found\n");
}

void fibonacciSearch(int a[], int n)
{
    int x;

    printf("Enter element to search: ");
    scanf("%d", &x);

    int f2 = 0;
    int f1 = 1;
    int f = f1 + f2;

    while(f < n)
    {
        f2 = f1;
        f1 = f;
        f = f1 + f2;
    }

    int offset = -1;

    while(f > 1)
    {
        int i = offset + f2;

        if(i >= n)
            i = n - 1;

        if(a[i] < x)
        {
            f = f1;
            f1 = f2;
            f2 = f - f1;
            offset = i;
        }
        else if(a[i] > x)
        {
            f = f2;
            f1 = f1 - f2;
            f2 = f - f1;
        }
        else
        {
            printf("Element found at index %d\n", i);
            return;
        }
    }

    if(f1 && offset + 1 < n && a[offset + 1] == x)
    {
        printf("Element found at index %d\n", offset + 1);
        return;
    }

    printf("Element not found\n");
}

int main()
{
    int a[MAX], n = 0;
    int choice;
    int sorted = 0;

    do
    {
        printf("\n1. Read Array\n");
        printf("2. Print Array\n");
        printf("3. Linear Search\n");
        printf("4. Insertion Sort\n");
        printf("5. Bubble Sort\n");
        printf("6. Selection Sort\n");
        printf("7. Merge Sort\n");
        printf("8. Quick Sort\n");
        printf("9. Binary Search\n");
        printf("10. Fibonacci Search\n");
        printf("0. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                readArray(a, &n, &sorted);
                break;

            case 2:
                if(n == 0)
                    printf("Read array first\n");
                else
                    printArray(a, n);
                break;

            case 3:
                if(n == 0)
                    printf("Read array first\n");
                else
                    linearSearch(a, n);
                break;

            case 4:
                if(n == 0)
                    printf("Read array first\n");
                else
                {
                    insertionSort(a, n);
                    sorted = 1;
                    printArray(a, n);
                }
                break;

            case 5:
                if(n == 0)
                    printf("Read array first\n");
                else
                {
                    bubbleSort(a, n);
                    sorted = 1;
                    printArray(a, n);
                }
                break;

            case 6:
                if(n == 0)
                    printf("Read array first\n");
                else
                {
                    selectionSort(a, n);
                    sorted = 1;
                    printArray(a, n);
                }
                break;

            case 7:
                if(n == 0)
                    printf("Read array first\n");
                else
                {
                    mergeSort(a, 0, n - 1);
                    sorted = 1;
                    printArray(a, n);
                }
                break;

            case 8:
                if(n == 0)
                    printf("Read array first\n");
                else
                {
                    quickSort(a, 0, n - 1);
                    sorted = 1;
                    printArray(a, n);
                }
                break;

            case 9:
                if(n == 0)
                    printf("Read array first\n");
                else if(sorted == 0)
                    printf("Sort the array first\n");
                else
                    binarySearch(a, n);
                break;

            case 10:
                if(n == 0)
                    printf("Read array first\n");
                else if(sorted == 0)
                    printf("Sort the array first\n");
                else
                    fibonacciSearch(a, n);
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 0);

    return 0;
}