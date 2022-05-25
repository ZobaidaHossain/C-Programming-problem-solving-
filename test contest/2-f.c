#include<stdio.h>
int main()
{
    int i,j,n,t;
    int count;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        for(i=count=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d\n swap",count);
    }
}
