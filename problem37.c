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

    int T, n, i;
    scanf("%d", &T);

    while (T--)
    {
        /* scanf("%d", &n);
         int rev = 0, l;
           while (n!=0)
           {
            l=n%10; // store the last number
            rev=rev*10; // sort on decimal postion
            rev=rev+l; //add
            n/=10; // delet last number--

           }*/

        char s[1000];
        //  int len = strlen(s);
        // printf("lmen%d\n", len);

        scanf("%s", &s);
        strrev(s);
        printf("%s", s);
    }

    return 0;
}
