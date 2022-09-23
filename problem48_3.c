#include<stdio.h>


int main() {
    
    int n;
    scanf("%d",&n);
    int ara[100001];
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d",&ara[i]);
    }

// sum of 1 to n?
    int sum=(n*(n+1))/2;
    int total=0;
    for (int i = 0; i <n-1; i++)
    {
        total+=ara[i];
    }

    printf("%d\n",sum-total);
    
    return 0;
    

}
