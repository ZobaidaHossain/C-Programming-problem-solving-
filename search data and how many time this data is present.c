
#include<stdio.h>
int main(){
    int arr[100],i,n,count=0,data;
    printf("Data List:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("You have to search: ");
    scanf("%d", &data);
    for(i=0;i<n;i++){
        if(data==arr[i]){
            count++;
        }
    }
    printf("%d is found %d times in your list\n", data, count);
    return(0);
}
