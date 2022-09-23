#include <stdio.h>
#include <math.h>

int main()
{

    unsigned long long int sum;

    int T, n, sqrt_num, num;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &n);
        for (num = 1; num <= n; num++)
        {
            sum = 1;
            sqrt_num = sqrt(num);
            for (int i = 2; i <= sqrt_num; i++)
            {
                if (num % i == 0)
                {
                    sum = sum + i + num / i;
                }
            }

            if (sum == num)
            {
                printf("%d\n", num);
            }
        }
    }

    return 0;
}
