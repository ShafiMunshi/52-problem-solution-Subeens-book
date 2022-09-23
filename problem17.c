#include <stdio.h>
#include <string.h>

int vowelChecker(char arr[])
{
    int count = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
            count++;
    }
    return count;
}

int main()
{

    int t;
    char s[1001];
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        fgets(s, 1000, stdin);
        int n = vowelChecker(s);
        printf("Number of vowels = %d\n", n);
    }

    return 0;
}
