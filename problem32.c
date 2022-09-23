#include<stdio.h>


int main() {
    
    int T,a,n,i;
    scanf("%d",&T);

    while (T--)
    {
        scanf("%d %d",&a,&n);

        for(i=a;i<=n;i+=a){
            printf("%d\n",i);
        }
    }
    

    return 0;
}
