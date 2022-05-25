#include<stdio.h>
int main()
{
    int s,k;
    int res=0;
    scanf("%d %d",&s,&k);
    while(s>0)
    {
        s=(s/k);
        res++;
    }
    printf("%d",res);
}
