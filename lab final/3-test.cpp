#include<stdio.h>
int main()
{
    int i,j,n;

    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    int low=0;
    int high=n-1;
    int mid;
    if(key<=arr[0]){
        printf("%d",arr[0]);
    }
    if(key>=arr[n-1]){
        printf("%d",arr[n-1]);
    }
    j=n;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("%d",arr[mid]);
            break;
        }
        if(key<arr[mid]){
            if(mid>0 && key>arr[mid-1])
              if(key-low>=high-key){
                printf("%d",high);
              }
              else{
                printf("%d",low);
              }
              j=mid;
        }
        else{
            if(mid<n-1 && key<arr[mid+1])
               if(mid>0 && key>arr[mid-1])
              if(key-low>=high-key){
                printf("%d",high);
              }
              else{
                printf("%d",low);
              }
            i=mid+1;
        }
    }
    printf("%d",key);
}
