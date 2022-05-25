#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,height,area;
    printf("enter base= ");
    scanf("%f",&base);
    printf("enter height=");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("area of triangle= %f/n",area);
    return 0;
}
