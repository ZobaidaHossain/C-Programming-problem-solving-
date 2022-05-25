
#include <iostream>
using namespace std;

int main(){
  int n;

  cin >> n;


  int h[n];
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }


  int dp[n];

  dp[0] = 0;

  dp[1] = abs(h[1] - h[0]);



  for(int i = 2; i < n; i++){

    dp[i] = dp[i - 1] + abs(h[i] - h[i-1]);

    dp[i] = min(dp[i], dp[i - 2] + abs(h[i] - h[i-2]));
  }

  printf("%d",dp[n-1]);

  //cout << dp[n-1] << endl;
  return 0;
}
