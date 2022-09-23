#include<stdio.h>
#include<string.h>


int main() {
    
    int t;
    char s[1001];
    scanf("%d",&t);

    while (t--)
    {
        fgets(s,1000,stdin);
        int i=strlen(s);
        while (i>-1)
        {
           printf("%c",s[i]);
           i--;
        }
        printf("\n");
        
    }
    

    return 0;
}
