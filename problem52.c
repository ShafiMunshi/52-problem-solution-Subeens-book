#include <stdio.h>
#include <string.h>

int main()
{

    char str[128];
    char sub[128];

    gets(str);
    gets(sub);

    // printf("%s\n",str);
    // printf("%s",sub);

    int str_len = strlen(str);
    int sub_len = strlen(sub);
    int i, j, count = 0;

    for (i = 0; i < (str_len - sub_len); i++)
    {
        if (sub[0] == str[i]) // look if the first index of sub == index of string,,,,else i++;
        {
            for (j = 1; j < sub_len; j++)
            {
                if (sub[j] != str[i + j])
                { // if every index of sub == index of string --> j++
                    break;
                }
            }
        }
        if (j == sub_len)
        { // when every index of sub-string is equal to j? then print the i..
            // printf("%d\n", i);
            count++;
            continue;
        }
    }

    printf("count = %d", count);

    return 0;
}
