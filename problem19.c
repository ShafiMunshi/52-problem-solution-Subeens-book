#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    char s[1001];
   
   // scanf("%d", &t);

    // for (int k = 0; k < t; k++)
    //{
      int  count = 0;
        fgets(s, 1000, stdin);
        int j = strlen(s);
        for (int i = 0; i < j; i++)
        {
            if (s[i] == ' ')
                count++;
        }

        printf("Count = %d\n", count + 1);
   // }

    return 0;
}
