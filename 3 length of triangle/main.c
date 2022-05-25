#include <math.h>


int main()
{
    double a,b,c,s,area;
    printf("enter the three value= ");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=a+b+c/3;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle= %.2lf/n",area);
    return 0;
}
