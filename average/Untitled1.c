#include<stdio.h>
int main()
{
int age;
float height,weight;
scanf("%d",&age);
if(age>=18)
{
scanf("%f",&height);
if(height>=5.4)
{
scanf("%f",&weight);
if(weight>=50)
{
printf("eligable\n");
}
else{
printf("not eligable\n");
}
}
else{
printf("not eligable\n");
}
}
else {
    printf("not eligable");
}
}
