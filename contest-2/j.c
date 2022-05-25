#include<stdio.h>
#include<string.h>
int main()
{
    int n,arr[1000];

    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        int M=0;
        for(int i=1;i<n;i++)
            for(int j=0;j<i;j++)
                if(arr[j]>arr[i])
                    M++;

        printf("Minimum exchange operations : %d\n",M);
    }
    return 0;
}
