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

    for (i = n - 1; i >= position - 1; i--)
    {
        Array[i+1] = Array[i];
    }

    Array[position] = New_Value;

    for (i = 0; i <= n; i++)
    {
        printf("Updated Array: %d\n", Array[i]);
    }

    return 0;
}
