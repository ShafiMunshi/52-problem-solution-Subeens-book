#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);

    char first_line[10001];
    char second_line[2];

    for (int j = 0; j < t; j++)
    {

        /* code */
        fgets(first_line, 100, stdin);
        // gets(first_line);
        //  printf("\n");

        gets(second_line);

        int count = 0;
        scanf("%c", &second_line);

        //  printf("%d\n",strlen(first_line));
        //   printf("%c\n",second_line[0]);

        for (int i = 0; i < strlen(first_line); i++)
        {
            if (second_line[0] == first_line[i])
            {
                count++;
            }
        }

        if (count > 0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n", second_line[0], first_line, count);
        }
        else
        {
            printf("'%c' is not present\n", second_line[0]);
        }
    }

    return 0;
}
