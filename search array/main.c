#include <stdio.h>

int main()
{
    int Array[100], position, i, n, New_Value;

    printf("Enter Number of Elements in Array: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &Array[i]);
    }

    printf("Enter the position to insert the new element: \n");
    scanf("%d", &position);

    for (i = 0; i < n-1; i++)
    {
         Array[position] = Array[i]+1;
        printf("Updated Array[%d]: %d\n",i,Array[i]+1);
    }

    return 0;
}
