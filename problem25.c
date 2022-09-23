#include <stdio.h>
#include <string.h>

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

    char s[101];
    int a, b,T;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d", &a, &b);
        int x=gcd(a,b);
        int lcd=(a*b)/x;
        printf("%d\n",lcd);
    }

    return 0;
}
