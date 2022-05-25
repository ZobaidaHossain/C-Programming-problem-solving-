
#include<iostream>
#include<string.h>
#include<cmath>
#include<climits>
using namespace std;

int main()
{

     int n,i;

     scanf("%d",&n);

     int  arr[n];
     for(int i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);

     }
     int k;
     scanf("%d",&k);


     int arr2[n];
     for(int i=0;i<n;i++)
     {
        arr2[i]=abs(arr[i]-k);

     }

     int res=INT_MAX;
     int in=-1;
      for(int i=0;i<n;i++)
     {
        if(arr2[i]==0)res=0;
        else if(arr2[i]<=res)
        {
            res=arr2[i];
            in=i;
        }

     }

if(res==0){
    printf("-1");
}
else{
    printf("%d",arr[in]);
}


     return 0;
}
