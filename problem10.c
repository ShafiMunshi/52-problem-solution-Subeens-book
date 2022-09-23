#include<stdio.h>


int main() {
    
    int t,r1,r2,r3;\
    float now,need;

    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d %d",&r1,&r2,&r3);

        now=r2/((300-r3)/6.00);
        need=(r1+1-r2)/(r3/6.00);

        printf("%.2f %.2f\n",now,need);

    }
    
    return 0;
}
