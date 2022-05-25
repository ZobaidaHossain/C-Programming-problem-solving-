#include <stdio.h>
#include <stdlib.h>
int getInvCount(int arr[], int n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;

    return inv_count;
}

/* Driver program to test above functions */
int main()
{
    int arr[100];
    int n,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
    scanf("%d",&arr[j]);

    printf(" Number of inversions are %d \n",
           getInvCount(arr, n));
    }}

    return 0;

}
