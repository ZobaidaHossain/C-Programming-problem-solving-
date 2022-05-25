#include<bits/stdc++.h>
using namespace std ;

void Merge(int arr[],int l,int m,int r);

//function for dividing and sorting the array
void Mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m ;
        m = l+(r-l)/2; // finding mid to avoid overflow

        Mergesort(arr,l,m); //sorting the first half

        Mergesort(arr,m+1,r); //sorting the second half

        Merge(arr,l,m,r);  // merging the divided arrays
    }
}

void Merge(int arr[],int l,int m,int r)
{
    int i,j,k,n1,n2;

    n1=m-l+1;
    n2=r-m;

    //creating temporary array for comparison
    int L[n1],R[n2];

    //copying elements to the left array
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }

    //copying elements to the right array
    for(int  j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }

    i=0;// i = index for left array
    j=0;// j = index for right array
    k=l;// k= index for final array

    //comparing and merging
    while( i<n1 && j<n2 )
    {
       if(L[i]<R[j])
       {
           arr[k] = L[i];
           i++;
           k++;
       }
       else
       {
           arr[k] = R[j];
           j++;
           k++;
       }
    }
       //copying the remaining elements from left array
    while(i<n1)
    {
        arr[k]=L[i];
        i++;k++;
    }

       //copying the remaining elements from right array
    while(j<n2)
    {
        arr[k]=R[j];
        j++;k++;
    }



}


int main()
{
    int test[]={4,5,2,1,3};
    //before sorting
    for(int i = 0 ;i<5;i++)
    {
        cout<<test[i];
    }

    cout<<endl;
    Mergesort(test,0,4);

    //after sorting
    for(int i = 0 ;i<5;i++)
    {
        cout<<test[i];
    }

}
