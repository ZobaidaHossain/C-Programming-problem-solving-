
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,x,b;
    cin >> n;
    int a[n];
    map<int,bool>mp;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        mp[a[i]]=true;
    }
    //sort(a,a+n);
    cin >> x;
    for(int j=1;j<=x;j++)
    {
        cin >> b;
        if(mp[b]==true)
        cout << -1 << endl;
      else
     {
        int i=0;
        while(a[i]<b)
            i++;

       if(i==n)
        cout << a[i-1] << endl;
        else if(i==0)
            cout << a[0] << endl;
       else
       {
        int dis1=a[i]-b;
        int dis2=b-a[i-1];
        //cout <<dis1 << " " << dis2 << endl;
        if(dis1<=dis2)
            cout << a[i] << endl;
        else
            cout << a[i-1] << endl;
       }
     }

    }
}
