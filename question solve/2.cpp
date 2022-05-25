// 1 + x/1! + x2/2! + x3/3! +…………….. + xn/n!
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=1,x,j,fact;
    double sum=1.1;
    printf("Enter the range of number:");
    scanf("%d",&n);
    printf("Enter the value of x:");
    scanf("%d",&x);
    while(i<=n)
    {
        fact=1;
        for(j=1;j<=i;j++){
            fact*=j;
        sum+=pow(x,i)/fact;
        }
        i++;
    }
    printf("The sum of the series = %0.2lf",sum);
}
