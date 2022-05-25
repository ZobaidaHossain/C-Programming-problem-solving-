#include<stdio.h>
int main()
{
    float n;
    printf("enter the number:");
    scanf("%f",&n);
    if(n<0 || n>100){
        printf("Fora de intervalo");
    }
    else if(n>=0 && n<=25)
    {
         printf("Intervalo (25,50]");
    }
    else if(n>25 && n<=50)
    {
        printf("Intervalo (25,50]");
    }
    else if(n>50 && n<=75)
    {
        printf("Intervalo (50,75]");
    }
    else
    {
        printf("Intervalo (75,100]");
    }

}
