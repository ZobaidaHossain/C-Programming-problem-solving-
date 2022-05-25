#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    int a[200];
    while(scanf("%d",&n)==1 && n)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int temp=0;
        for(i=0;i<n-1;i++){
            for(j=0;j<(n-i-1);j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }

        for(i=0;i<n;i++){
        printf("%d",a[i]);
        if(i<n-1)
            printf(" ");
        }
        printf("\n");

    }
}
