#include <stdio.h>
#include <math.h>

int main()
{

    int T, num, sum;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &num);
        sum = 1;
        int sqrt_num = sqrt(num);
        for (int i = 2; i <= sqrt_num; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i + num / i;
            }
        }

        printf("Sum %d\n",sum);

        if (sum == num)
        {
            printf("YES, %d is a perfect number\n", num);
        }
        else
        {
            printf("NO, %d is not a perfect number\n", num);
        }
    }

    return 0;
}
