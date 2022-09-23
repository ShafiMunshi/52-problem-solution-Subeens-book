#include <stdio.h>

/* Function definition for asc_sort */
void asc_sort(int a[100001], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{

    int arr[100001];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    // sorting the array-
    asc_sort(arr, n - 1);
     for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = 1; i <= (n - 1); i++)
    {
        if (arr[i - 1] + 1 != arr[i])
        {
            printf("%d\n", arr[i - 1]+1);
            break;
        }
    }

    return 0;
}
