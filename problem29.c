#include <stdio.h>
#include <string.h>

int main()
{

    int T;
    // char ch;
    scanf("%d", &T);

    char ch;

    /* Input character from user */
    for (int i = 0; i < T; i++)
    {
        printf("Enter any character: ");
        scanf("%c", &ch);

        /* Alphabet check */
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf("'%c' is alphabet.", ch);
        }
        else if (ch >= '0' && ch <= '9')
        {
            printf("'%c' is digit.", ch);
        }
        else
        {
            printf("'%c' is special character.", ch);
        }
    }

    return 0;
}
