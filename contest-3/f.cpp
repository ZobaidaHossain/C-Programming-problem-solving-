#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,s;
    int i,j;
    scanf("%lld %lld",&a ,&s);
    long long int w[a][2];
    for(i=0;i<a;i++){
        scanf("%lld %lld",&w[i][0], &w[i][1]);
    }
   long long int ks[a+1][s+1];
    for(i=0;i<=a;i++){
        for(j=0;j<=s;j++){
            ks[i][j]=0;
        }
    }
    for(i=1;i<a+1;i++){
        for(j=1;j<s+1;j++){
            if(w[i-1][0]>j){
                ks[i][j]=ks[i-1][j];
            }
            else{
                ks[i][j]=max(ks[i-1][j],ks[i-1][j-w[i-1][0]]+w[i-1][1]);
            }
        }
    }
    printf("%lld",ks[a][s]);
}
