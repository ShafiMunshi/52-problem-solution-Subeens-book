#include <stdio.h>
#include <string.h>

int main()
{

    char s[101];
    int arr[100];
    int T, len;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int sorted = 1;

        for (int i = 0; i <n; i++)
        {
            //printf("%d ",arr[i]);
            if (arr[i] < arr[i + 1])
            {
                sorted = 0;
                break;
            }
        }

        if (sorted==1)
        {
            printf("NO\n");
        }else
        {
            printf("YES\n");
        }
        
    }

    return 0;
}
