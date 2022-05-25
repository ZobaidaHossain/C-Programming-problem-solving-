#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int key;
    scanf("%d",&key);
    int mid=0;
    for(i=0;i<n;i++){
        if(arr[i]>key){
            mid=i;
            break;
        }
        if(arr[i]==key){
            mid=-1;
            break;
        }
    }
    if(mid==-1){
        printf("-1\n");
    }
    else if(i==0){
        printf("%d\n",arr[i]);
    }
    else if(arr[mid]-key<=key-arr[mid-1]){
        printf("%d\n",arr[mid]);
    }
     else if(arr[mid]-key>key-arr[mid-1]){
        printf("%d\n",arr[mid-1]);
    }
}
