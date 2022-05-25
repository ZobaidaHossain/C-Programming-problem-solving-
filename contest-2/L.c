#include<stdio.h>
int main()
{
    int n,k,res=0,cig;
    while(scanf("%d %d",&n, &k)==2){
       cig=(n-1)/(k-1);
       res=n+cig;
       printf("%d\n",res);
    }
    return 0;
}
