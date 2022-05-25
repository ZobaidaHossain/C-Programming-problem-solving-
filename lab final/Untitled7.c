
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    int a[n];
    map<int,bool>mp;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        mp[a[i]]=true;
    }
    sort(a,a+n);
    cin >> x;
    if(mp[x]==true)
        cout << -1 << endl;
    else
    {
        int i=0;
        while(a[i]<x)
            i++;
       if(i==n)
        cout << a[i-1] << endl;
       else
       {
                   int dis1=a[i]-x;
        int dis2=x-a[i-1];
        if(dis1<=dis2)
            cout << a[i] << endl;
        else
            cout << a[i-1] << endl;
       }

    }
    return 0;
}
