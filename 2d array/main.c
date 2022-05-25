#include <stdio.h>
int main()
{
    int i,j,n;
  int mat1[30][30],mat2[30][30],fin[30][30];
  scanf("%d",&n);
  printf("matrix1:\n");
  for(i=0;i<n;i++){
        for(j=0;j<n;j++){
    scanf("%d ",&mat1[i][j]);
  }
  }
   printf("matrix2:\n");
  for(i=0;i<n;i++){
        for(j=0;j<n;j++){
    scanf("%d ",&mat2[i][j]);
  }
  }
  for(i=0;i<n;i++){
        for(j=0;j<n;j++){
    fin[i][j]=mat1[i][j]+mat2[i][j];
  }
  }
   printf("fin:\n");
  for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<n;j++){
   printf("%d\t",fin[i][j]);
  }
  printf("\n");
  }

  }
