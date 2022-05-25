#include<stdio.h>
int main()
{
 int zobaida[100],i,j,temp=0,n;
 printf("numbers:\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("element %d:\n",i+1);
 scanf("%d",&zobaida[i]);
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 if(zobaida[i]>zobaida[j])
 {
 temp=zobaida[i];
 zobaida[i]=zobaida[j];
 zobaida[j]=temp;
 }
 }
 }
 printf("ascending order:\n");
 for(i=0;i<n;i++)
 {
 printf("%d\n",zobaida[i]);
 }
 printf("descending order:\n");
 for(i=n-1;i>=0;i--)
 {
 printf("%d\n",zobaida[i]);
 }
}
