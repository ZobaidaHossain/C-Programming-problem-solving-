#include<stdio.h>
#include<stdlib.h>

void merge(int arr[], int l, int a, int b)
{
    int i, j, k;
    int m1 = a - l + 1;
    int m2 =  b - a;
    int L[m1], R[m2];
    for (i = 0; i < m1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < m2; j++)
        R[j] = arr[a + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < m1 && j < m2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < m1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < m2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int a = l+(r-l)/2;
        mergeSort(arr, l, a);
        mergeSort(arr, a+1, r);

        merge(arr, l, a, r);
    }
}

int main()
{   int n,i,j,temp,arr[200005],a=0,x;
    scanf("%d",&n);
        for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }
         mergeSort(arr, 0, n - 1);
            x=1;
            for(i=0;i<n;i++)
            {
                 if(arr[i]>=x)
                 {
                     x++;
                     a++;

                 }
            }

printf("%d",a);



    return 0;
}
