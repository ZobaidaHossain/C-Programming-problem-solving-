#include <stdio.h>

int main()
{
   int a[4],j,sum=0;
   a[0]=1;
   a[1]=3;
   a[2]=8;
   a[3]=1;
   for(j=0;j<5;j++){
         sum=sum+a[j];
   }
 printf("sum:%d\n",sum);
    return 0;
}
