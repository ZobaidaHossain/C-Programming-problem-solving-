#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,d,x1,x2;
    printf("enter a,b,c ");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=(b*b-4*a*c);
    x1=(b-d)/2*a*c;
    x2=(b+d)/2*a*c;
    printf("x1= %lf/n",x1);
    printf("x2= %lf/n",x2);
    return 0;
}
