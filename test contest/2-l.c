#include<stdio.h>
int main()
{
    int n,k,cig=0,res=0;
    while(scanf("%d %d",&n, &k)==2){
        cig=(n-1)/(k-1);
        res=n+cig;
        printf("%d",res);
    }
}
