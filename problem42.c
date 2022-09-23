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

    int T, n;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &n);
        for (int i = n; i > 0; i--)
        {
            if (i == 1)
            {
                printf("1");
            }
            else if (i == 2)
            {
                printf("2");
                printf(" + ");
            }
            else
            {
                printf("2^%d", i);
                printf(" + ");
            }
        }
        printf("\n");
    }

    return 0;
}
