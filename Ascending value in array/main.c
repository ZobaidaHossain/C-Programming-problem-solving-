
#include <stdio.h>


int main()
{
    int array1[100],i,j,n,temp,array2[100],array3[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    printf("another values\n");
     scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&array2[j]);
    }
    for(i=0;i<n;i++){
        if(i>n){
            array3[i]=array2[k];
            k++;
        }
        array3[i]=array1[i];
    }

 for(i=0;i<n;i++){

    printf("%d\n",array3[i]);



 }
 printf("\n");
}
