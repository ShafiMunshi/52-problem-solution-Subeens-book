#include <stdio.h>
#include <string.h>

void vowChecker(char arr[], char n[])
{
    char index;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            index = arr[i];
        }
        n[i] = index;
    }
}

void constChecker(char arr[], char n[])
{
    char index;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] != 'a' || arr[i] != 'e' || arr[i] != 'i' || arr[i] != 'o' || arr[i] != 'u' || arr[i] != ' ')
        {
            index = arr[i];
        }

        n[i] = index;
    }
}

int main()
{

    int t;
   // scanf("%d", &t);
    char s[10000];

    // for (int i = 0; i < t; i++)
    // {
        scanf(" %[^\n]s", s);

        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                printf("%s", s[j]);
            }
        }
        printf("\n");
        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] != 'a' || s[j] != 'e' || s[j] != 'i' || s[j] != 'o' || s[j] != 'u' || s[j] != ' ')
            {
                printf("%s", s[j]);
            }
        }
        printf("\n");
    // }

    //     char vow[1000];
    //     char con[1000];

    //     // while (t--)
    //     // {
    //    gets(s);
    //     vowChecker(s, vow);
    //     constChecker(s, con);

    //     for (int i = 0; i < strlen(vow); i++)
    //     {

    //         printf("%c", vow[i]);
    //     }
    //     printf("\n");

    //     for (int i = 0; i < strlen(con); i++)
    //     {

    //         printf("%c", con[i]);
    //     }
    //     printf("\n");

    // }

    return 0;
}
