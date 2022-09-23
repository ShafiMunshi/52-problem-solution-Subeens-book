#include <stdio.h>
#include <string.h>


int main() {
    
    int n;
    char s[1000];
    scanf("%d",&n);
    while (n--)
    {
        fgets(s,1000,stdin);
        char word[];
       word= strtok(s,",!;?. ");
       int count=0;
        while (word!='\0')
        {
           if (strlen(word)>0)
           {
            count++;
           }
           word=strtok(NULL,",!;?. ");
           
        }

        printf("%d\n",count);
        
    }
    

    return 0;
}
