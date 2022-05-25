#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,sum;
    float avg;
    printf("enter the three number= ");
    scanf("%d, %d, %d",&a,&b,&c);
    sum = a+b+c;
    avg =sum/3;
    printf("sum= %d/n",sum);
    printf("average= %f/n",avg);
    return 0;
}
