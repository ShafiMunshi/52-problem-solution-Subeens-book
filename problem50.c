#include <stdio.h>
#include <string.h>

int main()
{

    char str[51];
    int i, T;

    scanf("%d", &T);

    while (T--)
    {
        gets(str);

        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] == 'R')
            {
                str[i] = str[i + 1];
            }
            if (str[i] == 'L')
            {
                str[i] = str[i - 1];
            }
        }

        printf("%s\n", str);
    }

    return 0;
}
