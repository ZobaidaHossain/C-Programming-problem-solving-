#include<stdio.h>
int maximun( int Array[]);
int minimum( int Array[]);
int main()
{
    int i,Array[100],n,m;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&Array[i]);
    }



     printf("Max Value = %d\n",m);


      printf("Min Value = %d\n",m);
    return 0;
}

int maximun( int Array[])
{

    int i,m,n;

    for(i=0; i<n; i++)
    {
        if(m<Array[i])
        {
            m=Array[i];
        }
        return m;
        }
int minimum( int Array[])
{

    int i,m;

    for(i=0; i<n; i++)
    {
        if(m>Array[i])
        {
            m=Array[i];
        }
        return m;
        }


  return m;

}
}
