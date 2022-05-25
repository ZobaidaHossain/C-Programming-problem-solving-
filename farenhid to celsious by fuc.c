#include<stdio.h>
float Celsius(float temperature);
float Fahrenheit(float temperature);
int main()
{

    int i,j,n,input,temperature;
    printf("Total Test Case: ");
    scanf("%d",&n);

    printf("Press 1 : for Fahrenheit to Celsius\nPress 2: for Celsius to Fahrenheit\n");

    for(i=1; i<=n; i++)
    {

        printf("Test Case: %d\nEnter your choice\n",i);
        scanf("%d",&input);

        if(input==1)
        {
            printf("Enter Temperature in Fahrenheit: ");
            scanf("%d",&temperature);
            Celsius(temperature);
            printf("Test case : %d\n%d Fahrenheit = %.2f Celsius\n",i,temperature,Celsius(temperature));
        }

        else if(input==2)
        {
            printf("Enter Temperature in Celsius: ");
            scanf("%d",&temperature);
            Fahrenheit(temperature);
            printf("Test case : %d\n%d Celsius = %.f Fahrenheit\n",i,temperature,Fahrenheit(temperature));
        }

    }
    return 0;
}
float Celsius(float temperature)
{
    return 5.0/9.0*(temperature-32);
}
float Fahrenheit(float temperature)
{
    return (temperature * 9.0) / 5.0 + 32;
}
