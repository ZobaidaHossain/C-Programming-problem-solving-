#include<stdio.h>
int main()
{
    int a[100],i,j,temp=0,n;
    printf("numbers:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("element %d:\n",i+1);
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("descending order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}
