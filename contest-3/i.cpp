#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,i;

   scanf("%d",&n);

   int j[n];
   for(i=0;i<n;i++){

    scanf("%d",&j[i]);

    }

    int d[n];
    d[0] = 0;
    d[1] = abs(j[1] - j[0]);

     for(i=2;i<n;i++){
        d[i] = d[i-1]+abs(j[i] - j[i-1]);
        d[i] = min(d[i], d[i - 2]+ abs(j[i] - j[i-2]));
     }

    printf("%d",d[n-1]);
    return 0;

}
