#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,d,l=10000,mid,t=0;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            t=1;
        }
    }
    if(t==1){
        printf("-1\n");
    }
    else{
        for(i=0;i<n;i++){
            d=abs(key-arr[i]);;
            if(l==d){
                mid=arr[i];
            }
            if(l>d){
                l=d;
                mid=arr[i];
            }
        }
        printf("%d\n",mid);
    }
    return 0;
}
