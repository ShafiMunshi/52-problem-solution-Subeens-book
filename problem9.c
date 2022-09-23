#include<stdio.h>
#include<math.h>


int main() {
    
    int t,n;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        double m=sqrt(n);
      /*  if (m==floor(sqrt(n)))
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }*/

        if(m*m == n){
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
        
        
    }
    

    return 0;
}
