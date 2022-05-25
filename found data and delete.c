#include <stdio.h>
int main()
{
    int arr[100], Data, i, n,Index;

    printf("How many Numbers you want to insert in Array?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: \n",i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter Date which you want to delete: \n");
    scanf("%d", &Data);




    for (i = 0; i < n - 1; i++)
    {
        if(Data == arr[i])
        {
            Index=i;
        }
        else{
            printf("%d\n is not found",Data);
        }
    }

    for (i = Index; i < n - 1; i++)
    {
        arr[i]=arr[i+1];
    }


    printf("The Array After Delete:\n");

    for (i = 0; i< n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }







    return 0;
}

