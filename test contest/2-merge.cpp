#include<stdlib.h>
#include<stdio.h>

void merge(int arr[],int l,int a,int b)
{
    int i,j,k,n1,n2;

     n1=a-l+1;
     n2=b-a;
     int L[n1],R[n2];
     for(int i=0;i<n1;i++){
        L[i]=arr[l+i];
     }
     for(int j=0;j<n2;j++){
        R[j]=arr[a+1+j];
     }
     i=0;
     j=0;
     k=l;

     while(i<n1 && j<n2){
        if(L[i]<= R[j]){
            arr[k]=L[i];
            i++;


        }
        else{
            arr[k]=R[j];
            j++;


        }
        k++;

     }
     while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
     }
     while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
     }
}
void mergeSort(int arr[], int l, int r)
     {
         if(l < r){
             int a=(l+r)/2;
            mergeSort(arr,l,a);
            mergeSort(arr,a+1,r);
            merge(arr,l,a,r);
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

            for(i=0;i<n;i++)
            {
                printf("%d",arr[i]);
            }





    return 0;
}




