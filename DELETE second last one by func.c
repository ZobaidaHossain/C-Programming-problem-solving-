#include<stdio.h>
void call(int *arr1){
         int temp;
        for(int i=0;i<6;i++){
       for(int j=i+1;j<6;j++){
          if(arr1[i]>arr1[j]){
            temp=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=temp;
          }
       }
    }
    }
int main(){
    int arr[6],i;
    printf("Data List: ");
    for(i=0;i<6;i++){
        scanf("%d", &arr[i]);
    }
    call(arr);
    printf("Sorted Array\n");
    for(i=0;i<6;i++){
        printf("%d\n", arr[i]);
    }
    for(i=6-2;i<6;i++){
        arr[i]=arr[i+1];
    }
    printf("After delete\n");
    for(i=0;i<6-1;i++){
        printf("%d\n", arr[i]);
    }
    return(0);
}
