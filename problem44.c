#include <stdio.h>

int main()
{

    int t, n, i, j;

    int even[21];
    int odd[21];

    even[0] = 1;
    even[1] = 1;
    odd[0] = 1;
    odd[1] = 1;

    scanf("%d", &t);
    while (t--)
    {

        scanf("%d", &n);
        for (i = 3; i <= n; i++)
        {
            printf("1\n");
            printf("1 1\n"); // these 2 printf line are static in pascel triangle..

            if (i % 2 == 0) // if number of line is even?
            {
                even[0] = 1;
                printf("%d ",even[0]);

                for (j = 1; j < i - 1; j++)
                {
                    even[j] = odd[j - 1] + odd[j];
                    printf("%d ", even[j]);
                }
                even[j] = 1;
                printf("%d\n", even[j]);
            }
            else
            {

                odd[0] = 1;
                printf("%d ",odd[0]);
                for (j = 1; j < i - 1; j++)
                {
                    odd[j] = even[j - 1] + even[j];
                    printf("%d ", odd[j]);
                }
                odd[j] = 1;
                printf("%d\n", odd[j]);
            }
        }
    }

    return 0;
}
