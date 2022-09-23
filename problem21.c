#include<stdio.h>
#include<string.h>


int main() {
    
    char s[100];
    int i,T,len;
    scanf("%d",&T);

    while (T--)
    {
        scanf(" %[^\n]",s);
        len=strlen(s);
        for(i=len-1;i>=0;i--){
            printf("%c",s[i]);
        }
        printf("\n");
    }
    

    return 0;
}
