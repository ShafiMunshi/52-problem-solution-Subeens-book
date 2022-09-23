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

    int T, a, b, c, i;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d %d", &a, &b, &c);
        int g = gcd(a, b);
        printf(" G=%d\n", g);

        for (i = 1; i <= c; i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
