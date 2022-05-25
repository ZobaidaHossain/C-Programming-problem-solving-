
#include <stdio.h>
void call(int array[],int n,int position)
{
   int i;
   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i= position - 1; i < n - 1; i++)
         array[i] = array[i+1];

      printf("Final array:\n");

      for (i = 0; i < n - 1; i++)
         printf("%d\n", array[i]);
   }
}
int main()
{
   int array[100], position, i, n;

   printf("Enter the number of elements in array = ");
   scanf("%d", &n);

   printf("Enter %d elements = ", n);

   for (i= 0; i < n; i++)
      scanf("%d", &array[i]);

   printf("Enter the position = ");
   scanf("%d", &position);

   call(array,n,position);

   return 0;
}
