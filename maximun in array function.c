#include<stdio.h>
void call( int Array[]);
int main()
{
    int i,Array[100],n;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&Array[i]);
    }
    call(Array);
}

void call( int Array[])
{

    int i,max,n;
    max=Array[0];

    for(i=1; i<n; i++)
    {
        if(max<Array[i])
        {
            max=Array[i];
        }
    }

    printf("Maximum Value = %d\n",max);

}
