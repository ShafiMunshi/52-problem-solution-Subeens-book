#include<stdio.h>


int main() {
    
    int T,a,b,c,i;
    scanf("%d",&T);

    while (T--)
    {
        scanf("%d %d  %d",&a,&b,&c);

        for(i=a;i<=b;i++){
            if(i%c==0){
                printf("%d\n",i);
                i+=(c-1); // by adding this statement we decrease the looping--
            }
        }

        
    }
    

    return 0;
}
