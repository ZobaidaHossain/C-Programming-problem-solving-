#include<stdio.h>
int main()
{
    int n,i,j,t,count;
    int a[50];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=count=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j])
                 count++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}
