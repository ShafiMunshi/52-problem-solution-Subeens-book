#include<stdio.h>
#include<string.h>


int main() {
    
    int T,n;
    scanf("%d",&T);

    while (T--)
    {
        char s[1000];
        char temp[1000];
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            gets(s);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(strcmp(s[i],s[j])){
                    strcpy(temp,s[i]);
                    strcpy(s[i],s[j]);
                    strcpy(s[j],temp);
                }
            }
            
        }

        for (int i = 0; i < n; i++)
        {
            printf("%s\n",s[i]);
        }
        
        
        
    }
    

    return 0;
}
