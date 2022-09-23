#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    if (n == 2)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return 0;
    }
    int root = sqrt(n);

    for (int i = 3; i <= root; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{

    int T;
    int n;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);

        int sqr_n = sqrt(n);

        if (is_prime(n) == 1)
        {
            printf("%d is prime number\n", n);
        }
        else
        {
            printf("%d is not prime\n", n);
        }
    }

    return 0;
}
