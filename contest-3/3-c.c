#include<bits/stdc++.h>
int n;
int arr[100005][4];
int d[100005][4];
int dp(int index, int flag)
{
    if(index==n)
        return 0;
    if(d[index][flag] !=-1)
    return d[index][flag];
    int maxo=0;
    if(flag==0){
        maxo = max(maxo, arr[index][1]+dp(index+1, 1));
         maxo = max(maxo, arr[index][2]+dp(index+1, 2));
          maxo = max(maxo, arr[index][3]+dp(index+1, 3));
    }
    else if(flag==1){
         maxo = max(maxo, arr[index][2]+dp(index+1, 2));
          maxo = max(maxo, arr[index][3]+dp(index+1, 3));
    }
    else if(flag==2){
         maxo = max(maxo, arr[index][1]+dp(index+1, 1));
          maxo = max(maxo, arr[index][3]+dp(index+1, 3));
    }
    else{
         maxo = max(maxo, arr[index][1]+dp(index+1, 1));
          maxo = max(maxo, arr[index][2]+dp(index+1, 2));
    }
    return d[index][flag]=maxo;
}
int main()
{
    int i,j;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=1;j<=3;j++){
                cin >> arr[i][j];

        }
    }
    function(d, -1, sizeof d);
    cout << dp(0,0);
    return 0;

}
