#include<stdio.h>
int main()
{
    int n,temp=0,i,j;
    int res=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i+=2){
       res+=abs(a[i]-a[i+1]);
    }
    printf("result:%d\n",res);
}
