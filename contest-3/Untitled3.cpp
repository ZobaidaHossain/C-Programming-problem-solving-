

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int o,p;
    cin>>o>>p;
    long long int V[o][2];
    for (int i=0;i<o;i++)
    {
        cin>>V[i][0]>>V[i][1];
    }
    long long int kns[o+1][p+1];
    for (int i=0;i<=o;i++){
        for(int j=0;j<=p;j++){

            kns[i][j]=0;
        }
    }
    for (int i=1;i<o+1;i++){

        for(int j=1;j<p+1;j++){
            if (V[i-1][0]>j){
                kns[i][j]=kns[i-1][j];
            }
            else{
                kns[i][j]=max(kns[i-1][j],kns[i-1][j-V[i-1][0]]+V[i-1][1]);
            }

        }

    }
    cout<<kns[o][p];
}
