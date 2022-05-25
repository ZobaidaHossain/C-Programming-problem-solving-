

#include<stdio.h>
int main()
{
   int num, reverse,sum, temp,i;
   int T;
    scanf("%d",&T);
    for( i = 1; i <= T; i++){

   scanf("%d",&num);

   temp = num;
   sum=0;
   while( temp != 0 )
   {
      reverse = temp % 10;
      sum =sum*10+reverse;
      temp = temp/10;
   }
if ( num == sum )
      printf("Case %d: Yes\n",i);
   else
     printf("Case %d: No\n",i);

}
 return 0;
}
