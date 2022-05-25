#include <stdio.h>

int main()
{
    int a[100],i,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("element %d:",i);
        scanf("%d",&a[i]);
    }
    return 0;
}
