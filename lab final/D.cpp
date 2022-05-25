
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l;
    scanf("%d",&n);

    int a[n];
    map<int,bool>to;
    for(int i=0; i<n; i++)
    {
        scanf("%d",a[i]);

        to[a[i]]=true;
    }
    scanf("%d",&k);

    for(int j=1; j<=k; j++)
    {
        scanf("%d",&l);

        if(to[l]==true)
            printf("-1");

        else
        {
            int i=0;
            while(a[i]<l)
                i++;
            if(i==n)
            printf("%d",a[i-1]);

            else if(i==0)
            printf("%d",a[0]);

            else
            {
                int d1=a[i]-l;
                int d2=l-a[i-1];
                if(d1<=d2)
                printf("%d",a[i]);

                else
                printf("%d",a[i-1]);

            }
        }

    }

    return 0;
}
