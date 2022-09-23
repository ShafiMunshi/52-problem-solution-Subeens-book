#include<stdio.h>
#include<string.h>
#include<math.h>
#define size 100001
char ara[size];

// seive method for prime number---
void seive(){
    int i,j,root;
    // initialize all index to value 1
    for ( i = 2; i < size; i++)
    {
            ara[i]=1;
    }

    root=sqrt(size);
    for(i=2;i<=root;i++){
        if(ara[i] ==1){
            for(j=2;i*j<=size;j++){
                ara[i*j]=0;
            }
        }
    }
    
}





int main() {
    
    char s[100];
    int i,T,a,b,count;
    seive();
    scanf("%d",&T);

    while (T--)
    {
        scanf("%d %d",&a,&b);
        count=0;
        for(i=a;i<=b;i++){
            if(ara[i]){
                count++;
            }
        }
        printf("%d\n",count);
    }
    

    return 0;
}
