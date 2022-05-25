#include<stdio.h>
int main()
{
int digit;
printf("enter a digit:");
scanf("%d",&digit);
switch(digit)
{
case 0:
printf("Zero\n");
break;
case 1:
printf("one\n");
break;
default:
printf("not a valid number");

}
return 0;
}
