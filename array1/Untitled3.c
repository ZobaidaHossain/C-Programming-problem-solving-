#include <stdio.h>

int main()
{
    int a[100],i,j,n;
    scanf("%d",&n);


 for(i=0;i<n;i++){
printf("element - %d : ",i);
scanf("%d",&a[i]);
}
 for(i=0;i<n;i++){
   if(a[i]%2==0){
 printf("even =%d\n",a[i]);

   }
 }
   for(i=0;i<n;i++){
   if(a[i]%2!=0){
 printf("even=%d\n",a[i]);

   }
 }


printf("\n");
}

