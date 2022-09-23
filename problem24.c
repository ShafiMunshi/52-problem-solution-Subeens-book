#include<stdio.h>
#include<string.h>


int main() {
    
    char s[101];
    int arr[100];
    int i,T,len;
    scanf("%d",&T);

    while (T--)
    {
        int n;
       scanf("%d",&n);
       for (int i = 0;i<n; i++)
       {
        scanf("%d",&arr[i]);  
       }

       for (int i = 0; i < n; i+=2)
       {
        printf("%d ",arr[i]);
       }
       
       printf("\n");
    }
    
    

    return 0;
}
