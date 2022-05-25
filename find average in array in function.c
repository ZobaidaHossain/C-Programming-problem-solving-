#include <stdio.h>
float call(int Array[]);
int main()
{
    int i,Array[100];
    for(i=0; i<5; i++)
    {
        scanf("%d",&Array[i]);
    }
    call(Array);
    printf("Avarage is %.3f\n",call(Array));
}
float call(int Array[])
{
    int i;
    float Average,sum=0;
    for (i=0; i<5; i++)
    {
        sum=sum + Array[i];
    }
    Average= sum/5;

    return Average;
}
