#include<stdio.h>


int main() {
    
    int t;
    long long int ans;
    scanf("%d",&t);
    while (t--)
    {
        int a;

        scanf("%d",&a);
        ans=1;
       for(int i=1;i<=a;i++){
        ans*=i;
       }

       printf("%lld\n",ans);
    }
    

    return 0;
}
