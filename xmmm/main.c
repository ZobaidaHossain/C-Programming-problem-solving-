#include<stdio.h>

int main ()
{
    int Array[10],i,j,counter,Search,position;

    printf("Elements: \n");
    for(i=0; i<6; i++)
    {

        scanf("%d",&Array[i]);
    }
    Opshory_ArraySort(Array);

    printf("Sorted Array: ");
    for(i=0; i<6; i++)
    {
        printf("%d ",Array[i]);
    }

    Opshory_ArrayDuplicate(Array);

    printf("Search: ");
    scanf("%d",&Search);
    for(int i=0; i<6; i++)
    {
        if(Search == Array[i])
        {
            position=i;
        }
    }
    for(i=position;i<6;i++)
    {
        Array[i]=Array[i+1];
    }
    printf("After Delete: \n");
    for(int i=0; i<6-1; i++)
    {
        printf("%d\n",Array[i]);
    }

}
void Opshory_ArraySort(int *Array)
{
    int temp;
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(Array[i]>Array[j])
            {
                temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
        }
    }
}
void Opshory_ArrayDuplicate(int *Array)
{
    int counter=0;
    printf("Duplicate Elements: \n");

    for(int i = 0; i < 6; i++)
    {
        for(int j = i + 1; j < 6; j++)
        {
            if(Array[i] == Array[j])
            {
                printf("Duplicate : %d\n",Array[i]);
                counter++;
            }
        }
    }
    if(counter ==0)
    {
        printf("Duplicate :  NULL");
    }
}
