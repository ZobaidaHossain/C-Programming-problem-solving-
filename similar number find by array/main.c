
#include <stdio.h>

int main()
{
    int i,j,n;
    int arr[100];

    printf("N: \n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
            }
        }
    }
    return 0;
}
