#include <stdio.h>
#include <string.h>

int main()
{

    int T, a, b, c, i;
    char s[1000];
    scanf("%d", &T);

    while (T--)
    {
        scanf("%s", s);
        char rev[1000];
        strcpy(rev, s);
        strrev(s);
        if (strcmp(s, rev) == 0)
        {
            printf("Yes it is palindrome word");
        }
        else
        {
            printf("NO it is not palindrome number");
        }
    }

    return 0;
}
