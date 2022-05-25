#include <stdio.h>


int main()
{
    int marks=0;
    printf("enter the marks:\n");
    scanf("%d",& marks);
    if(marks>=80)
    {
        printf("grades:A+");
    }
    else if(marks>=75 && marks<80)
    {
        printf("grades:A");
    }
    else if(marks>=70 && marks<75)
    {
        printf("grades:A-");
    }
    else if(marks>=65 && marks<70)
    {
        printf("grades:B");
    }
    else
    {
        printf("fail");
    }
    return 0;
}
