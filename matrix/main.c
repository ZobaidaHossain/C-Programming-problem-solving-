#include <stdio.h>
int main()
{
    int i,j,sum=0;
  int mat1[3][3],mat2[3][3],fin[3][3];
  printf("matrix1:\n");
  for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    scanf("%d ",&mat1[i][j]);
  }
  }
   printf("matrix2:\n");
  for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    scanf("%d ",&mat2[i][j]);
  }
  }
  for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    fin[i][j]=mat1[i][j]+mat2[i][j];
  }
  }
   printf("fin:\n");
  for(i=0;i<3;i++){
        for(j=0;j<3;j++){
   printf("%d ",fin[i][j]);
  }
  printf("\n");
  }

  }




