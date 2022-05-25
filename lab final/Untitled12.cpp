
#include<iostream>
using namespace std;
int main()
{
    int n,c,s,m;
    scanf("%d",&n);

    for(m=1;m<=n;m++)
    {
        scanf("%d %d",&c,&s);

        int ci[c];
        for(int i=0;i<c;i++)
            scanf("%d",&ci[i]);

        int dp[s+1];
        int MAX=INT_MAX;
        dp[0]=0;
        for(int i=1;i<=s;i++)
            dp[i]=MAX;
        for(int i=1;i<=s;i++)
        {
            int res=MAX;
            for(int j=0;j<c;j++)
            {
                if(ci[j]<=i)
                    res=min(res,dp[i-ci[j]]);
            }
            if(res==INT_MAX)
                dp[i]=INT_MAX;
            else
                dp[i]=res+1;

        }

        cout << "Case " << m<< ": " << dp[s] << endl;


    }
    return 0;
}
