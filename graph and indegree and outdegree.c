#include<stdio.h>
int main()
{
int n,i,j,indegree,outdegree;
printf("nodes:");
scanf("%d",&n);
int matrix[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("element: ");
scanf("%d",&matrix[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d  ",matrix[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++){
for(j=0;j<n;j++)
{
if(matrix[i][j]==1)
{
printf("%c -> %c\n",i+65,j+65);
}
}
}
printf("\n");
printf("indegree: \n");
for(j=0;j<n;j++)
{
indegree=0;

for(i=0;i<n;i++){
if(matrix[i][j]==1)
{
    indegree++;
}
}
printf("indegree of %c: %d\n",j+65,indegree);
}
printf("\n");
printf("outdegree: \n");
for(i=0;i<n;i++)
{
  outdegree=0;
for(j=0;j<n;j++){

if(matrix[i][j]==1)
{
    outdegree++;
}
}
printf("outdegree of %c: %d\n",i+65,outdegree);
}
}
