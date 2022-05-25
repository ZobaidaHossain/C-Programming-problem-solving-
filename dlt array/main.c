#include <stdio.h>

int main()
{
    int Array[100], position, i,j, n;

    printf("Enter Number of Elements in Array: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        scanf("%d", &Array[i]);
    }
    for(i = 0; i < n; i++)
    {

        for(int j = i + 1; j < n; j++)
        {
  printf("Enter the position to insert the new element: \n");
        scanf("%d", &Array[j]);
    }
    }






    for (i = Array[j]; i<n-1 ; i++){


       Array[j]  = Array[j+1] ;}


printf("Updated Array:\n");
for(i=0;i<n-1;i++){


    printf("%d\n",Array[i]);
}
    }






