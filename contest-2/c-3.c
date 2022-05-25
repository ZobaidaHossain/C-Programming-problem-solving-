#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;

    int temp=0;
    scanf("%d",&n);
     int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<(n-i-1);j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int res=0;
    for(i=0;i<n;i+=2){
        res+=abs(a[i]-a[i+1]);
    }
    printf("%d\n",res);
}
