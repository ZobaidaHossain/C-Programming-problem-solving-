#include<stdio.h>

int call(int a)
{
    int i, count=0;

    for(i=2; i<=a/2; i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("Yes\n");
    }
    if(count!=0)
    {
        printf("No\n");
    }
}

int main()
{
    int A, Prime;

    scanf("%d", &A);

    Prime = call(A);
}
