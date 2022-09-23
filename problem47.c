#include <stdio.h>

int main()
{

    int t, n1, n2;
    int arr1[100000];
    int arr2[100000];

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n1);
        for (int i = 0; i < n1; i++)
        {
            scanf("%d", arr1[i]);
        }

        scanf("%d", &n2);
        for (int i = 0; i < n2; i++)
        {
            scanf("%d", arr2[i]);
        }

        // int arr1[] = {1, 2, 4, 7, 9, 10};
        // int arr2[] = {1, 2, 3, 4, 7, 8, 9, 10};

        int c[100000];

        int i, j, k, len;
        i = j = k = 0;
        // int n1 = 6, n2 = 8;

        while (n1 && n2)
        {

            if (arr1[i] < arr2[j])
            {
                c[k] = arr1[i];
                k++;
                i++;
                --n1;
                // printf(" small arr1[%d]= %d\n", i, arr1[i]);
            }
            else
            {
                c[k] = arr2[j];
                k++;
                j++;
                --n2;
                // printf(" small arr2[%d]= %d\n", j, arr2[j]);
            }
        }

        len = k;
        for (int m = 0; m < len; m++)
        {
            printf("%d ", c[m]);
        }

        // making uniquee-
        int l = 0;
        int d[20];
        for (int i = 0; i <= len; i++)
        {
            if (c[i - 1] != c[i])
            {
                d[l] = c[i];
                l++;
            }
        }

        printf("\nUnique = ");

        for (int i = 0; i < l; i++)
        {
            printf("%d ", d[i]);
        }
    }

    return 0;
}
