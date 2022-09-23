#include <stdio.h>
#include <string.h>

int main()
{

    char ch[200];

    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", ch);
        printf("%s\n", ch);
        
        int count=0;
        int s_len = strlen(ch);
        for (int i = 0; i < s_len; i++)
        {

            if (ch[i] == ' ')
            {
                count++;
            }
        }

        // while (ch[i] != '\0')
        // {
        //     /* code */
        //     if (ch[i] == ' ')
        //     {
        //         count++;
        //     }

        //     i++;
        // }
        
        int ans = (count+1) * (count - 1);
        printf("%d\n", ans);
    }

    return 0;
}
