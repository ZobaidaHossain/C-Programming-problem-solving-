#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000];
    int n,count=0,i,T;
    int p=0,q=0;
    scanf("%d",&T);
    while(T--)
    {
        q = 0, p = 0, count=0;
        scanf("%s",&s);
        n = strlen(s);
        for(i=0; i<n-1; i++)
        {
            if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0'))
                count++;
            if(s[i]=='0')
                p++;
            if(s[i]=='1')
                q++;

        }
        if(s[n-1]=='0')
            p++;
        else
            q++;

        if((count>2)||((s[0]=='1')&&(s[n-1]=='1')&&(p!=0))||(p==n))
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
