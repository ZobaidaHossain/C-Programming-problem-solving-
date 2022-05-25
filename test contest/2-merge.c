#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int l,int m,int r)
{
    int i,j,k,n1,n2;

     n1=m-1+l;
     n2=r-m;
     int tl[n1],tr[n2];
     for(i=0;i<n1;i++){
        tl[i]=arr[l+i];
     }
     for(j=0;j<n2;j++){
        tr[j]=arr[m+1+j];
     }
     i=0;
     j=0;
     k=l;

     while(i<n1 && j<n2){
        if(tl<tr){
            arr[k]=tl[i];
            i++;
            k++;
        }
        else{
            arr[k]=tr[j];
            j++;
            k++;
        }
     }
     while(i<n1){
        arr[k]=tl[i];
        i++;
        k++;
     }
     while(j<n2){
        arr[k]=tr[j];
        j++;
        k++;
     }
     void mergesort(int arr[],int l,int r){
         if(l<r){
            int m=l+(r-1)/2;
            mergesort(arr,l,m);
            mergesort(arr,m+1,r);
            merge(arr,l,m,r);
         }
     }
     int main(){
         int n,i,j,arr[200005],t;
         scanf("%d",t);
         while(t--){
            scanf("%d",n);
            for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            mergesort(0,n);
            for(i=0;i<n;i++){
                printf("%d\n",a[i]);
            }

         }
     }

}
