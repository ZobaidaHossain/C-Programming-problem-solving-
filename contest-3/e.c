#include<stdio.h>
int main()
{
    int k,m;
    int arr[2001];
    int li[2001],ld[2001];
    int i,j;
    for(scanf("%d",&k);k;k--){
        scanf("%d",&m);
        int res=1;
        for(i=0;i<m;i++)
            scanf("%d",&arr[i]);
           // li[m]=0;
           // ld[m]=0;
            for(i=m-1;i>=0;i--){
                li[i]=0;
                ld[i]=0;
                for(j=i+1;j<m;j++){
                    if(arr[i]<arr[j]&& li[j]>li[i])
                        li[i]=li[j];
                    if(arr[i]>arr[j] && ld[j]>ld[i])
                        ld[i]=ld[j];
                }
                li[i]++;
                ld[i]++;
                if(li[i]+ld[i]>res)
                    res=li[i]+ld[i];
            }
            printf("%d",res-1);

    }
    return 0;
}
