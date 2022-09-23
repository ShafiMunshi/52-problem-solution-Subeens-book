#include<stdio.h>


int main() {
    
    long long int ans;
    int t,count,x;
    scanf("%d",&t);
    while (t--)
    {
        count=0;
        ans=1;
        scanf("%d",&x);
        for(int i=1;i<=x;i++){
            ans*=i;
        }

        while(ans%10 ==0){
            count++;
            ans/=10;
        }

        printf("%d\n",count);
    }
    

    return 0;
}
