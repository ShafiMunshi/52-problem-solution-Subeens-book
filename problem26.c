#include<stdio.h>
#include<string.h>


int main() {
    
    char s[101];
    int arr[100];
    int T;
    float a;
    scanf("%d",&T);

    while (T--)
    {
        scanf("%f",&a);
        int count=0;
        while (a>=1.0)
        {
            a/=2.0;
            count++;
        }
        printf("%d days\n",count);
        
    }
    
    

    return 0;
}
