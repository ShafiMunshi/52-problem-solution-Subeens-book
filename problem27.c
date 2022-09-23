#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    char s[101];
    int arr[100];
    int i, T, a, len;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &a);
        i = a;
        printf("i %d\n", i);
        int sum=0;
        while (a != 0)
        {
          int tmp = a % 10;
            sum =sum+ (tmp * tmp * tmp);
            a /= 10;
        }

        printf("sum %d\n", sum);
        if (sum == i)
        {
            printf("%d is Armostring number!\n",i);
        }
        else
        {
            printf("%d is not an armostrong number\n", i);
        }
    }

    return 0;
}
