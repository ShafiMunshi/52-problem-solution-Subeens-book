#include <stdio.h>

long long int fact(long long int n)
{
    long long int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }

    return f;
}

int main()
{

    int T, i;

    long long int n, nfact;
    double sum ;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%lld", &n);
        sum=0;
        
        
        for (int i = 1; i <= n; i++)
        {
            nfact = fact(i);
          //  printf("nfact[%d]=%d\n",i, nfact);
            double x = (float)i / (float)nfact;
            sum += x;
          //  printf("sum=%lf\n", sum);
        }

        printf("%.4lf\n", sum);
    }

    return 0;
}
