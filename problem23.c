#include<stdio.h>
#include<string.h>


int main() {
    
    char s[101];
    int i,T,len;
    scanf("%d",&T);

    while (T--)
    {
       scanf("%s",s);
       for (int i = 0; s[i]!='\0'; i++)
       {
            if (s[i]>='A'&&s[i]<='Z')
            {
                printf("%d",s[i]-64);
            }
            if (s[i]>='a'&&s[i]<='z')
            {
                printf("%d",s[i]-96);
            }

            
       }
       printf("\n");
    }
    
    

    return 0;
}
