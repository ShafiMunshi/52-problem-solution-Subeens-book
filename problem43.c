#include <stdio.h>

int pown(int n,int p)
{
    int res = p;
    for (int i = 1; i < n; i++)
    {
        res*=p;;
        // printf("res %d\n",res);
    }
    return res;
}

int main()
{

    int T, p, q, c, i, rest;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d %d", &p, &q, &c);

        rest = pown(q,p);
        // printf("pow = %d\n", rest);

        printf("Result = %d\n", rest % c);
    }

    return 0;
}
