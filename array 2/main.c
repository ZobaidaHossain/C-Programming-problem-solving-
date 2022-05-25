#include <stdio.h>

int main()
{
    int a[30],n,i;
    printf("enter the number:");
    scanf("%d",&n);
    a[0]=1;
    a[1]=2;
    for(i=2;i<n;i++){
        a[i]=a[i-3]+a[i-1];
    }
    printf(" \n ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}
