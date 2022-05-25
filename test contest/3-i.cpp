#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int d[n];
    d[0]=0;
    d[1]=abs(ar[1]-ar[0]);
    for(i=2;i<n;i++){
        d[i]=d[i-1]+abs(ar[i]-ar[i-1]);
        d[i]=min(d[i],d[i-2]+abs(ar[i]-ar[i-2]));
    }
    printf("%d",d[n-1]);
}
