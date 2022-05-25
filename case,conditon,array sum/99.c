#include<stdio.h>
int main()
{
    int N[1000],i;
    for(i=0;i<1000;i++)
        scanf("%d",&N[i]);
       N[0]=0;
        N[1]=1;
        N[2]=2;
            printf("N[%d] = %d\n",i,N[i]);
    return 0;
}
