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

    int T, x, k, i;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d", &x, &k);

        int sum=1,powr=1;
        for ( i = 0; i < k; i++)
        {
            powr*=x;
            sum+=powr;
        }

        printf("Result = %d\n",sum);
        
    }

    return 0;
}
