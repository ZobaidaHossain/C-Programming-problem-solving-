#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[2000],li[2000],lb[2000];
    int n,t;
    int s,res;
    int i,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
            res=0;
            for(i=n-1;i>=0;i--){
                li[i]=1;
                lb[i]=1;
                for(j=i+1;j<n;j++){
                    if(arr[i]<arr[j])
                    {
                        li[i]=max(li[j]+1,li[i]);
                    }
                    if(arr[i]>arr[j]){
                        lb[i]=max(lb[j]+1, lb[i]);
                    }
                }
                res=max(res,li[i]+lb[i]-1);

            }
        printf("%d\n",res);
    }
    return 0;
}
