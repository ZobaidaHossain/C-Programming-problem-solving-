#include<stdio.h>
int main(){
    int i,a[100],n;
    scanf("%d",&n);
   for(i=0;i<3;i++){
    printf("element-%d:",i);
    scanf("%d",&a[i]);
   }
    printf("\nThe values store into the array are :");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
      for(i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
    printf("\n");

}
