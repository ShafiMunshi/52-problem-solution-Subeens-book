#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    char s[1001];
   
    scanf("%d", &t);

    while (t--)
    {
      int  count[26]={0};
        scanf("%s", s);

        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                count[s[i] - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                printf("%c = %d\n", 'a' + i, count[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
