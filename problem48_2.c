#include <stdio.h>

int main()
{

    // assingnign all the value to 0;

    int arr[100001] = {0};

    int n, x;
    scanf("%d", &n);
    // store 1 according to index number;

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &x);
        arr[x] = 1;
    }

    printf("%d\n", arr[5]);

    // searching the index where the value is 0?
    int missing;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
        missing=i;
            break;
        }
    }

    printf("%d",missing);

    return 0;
}
