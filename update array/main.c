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

    printf("Enter the New Value to insert: \n");
    scanf("%d", &New_Value);

    for (i = 0; i<n; i++)
    {
        Array[position] = New_Value;
        printf("Updated Array[%d]: %d\n",i, Array[i]);

    }


    return 0;
}
