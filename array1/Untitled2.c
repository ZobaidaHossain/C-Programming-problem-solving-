#include <stdio.h>

int main()
{
    int a[100],i;


 for(i=0;i<3;i++){
printf("element - %d : ",i);
scanf("%d",&a[i]);
}
printf("The elements stored in the first array are:");
 for(i=0;i<3;i++){
    printf("%d\n",a[i]);
 }
 printf("The elements stored in the second array are:");
 for(i=0;i<3;i++){
    printf("%d\n",a[i]);
 }


printf("\n");
}
