#include <stdio.h>

void bubble(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int tmp;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

void selectionSort(int a[], int n)
{

    int i, j, index_min, temp;
    for (i = 0; i < n; i++)
    {
        index_min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[index_min])
            {
                index_min = j;
            }
        }

        if (index_min != i)
        {
            temp = a[i];
            a[i] = a[index_min];
            a[index_min] = temp;
        }
    }
}

int main()
{

    int t;
    scanf("%d", &t);
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[j]);
        }

        //       bubble(arr, 3);

        //        selectionSort(arr,3);

       

        printf("Case %d: %d %d %d\n", i + 1, arr[0], arr[1], arr[2]);
    }

    return 0;
}
