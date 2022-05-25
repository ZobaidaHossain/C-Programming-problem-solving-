#include<stdio.h>
int main()
{
    int i,j,n,m;
    while(scanf("%d",&n)==1){
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    m=0;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[j]>a[i]){
                m++;
            }
        }
    }
    printf("m=%d",m);
    }
}
