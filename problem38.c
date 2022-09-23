#include <stdio.h>

int gcd(int a, int b)
{
    int t;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }

    return a;
}

int main()
{

    int T, m, n, i;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d", &n, &m);
        // print the first--
        for (i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d ", m);
            }
            printf("\n");
        }

        // print the last diamond

        for (i = n - 1; i >= 0; i--)
        {
            for (int j = i; j >= 0; j--)
            {
                printf("%d ", m);
            }
            printf("\n");
        }
    }

    return 0;
}
