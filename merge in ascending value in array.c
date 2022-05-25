#include<stdio.h>
int main(){
    int N, N1, i, j, temp;
    int a[100],b[100];
    printf("Size of Array - 1: N1 = ");
    scanf("%d", &N);
    printf("Enter %d array elements\n", N);
    for(i=0; i<N; i++){
     scanf("%d", &a[i]);
    }
    printf("Size of Array - 2: N2 = ");
    scanf("%d", &N1);

    printf("Enter %d array elements\n", N1);
    for(i=0; i<N1; i++){
        scanf("%d", &b[i]);
    }
    for(i=N,j=0;i<(N+N1);j++,i++){
        a[i]=b[j];
    }
    for(i=0; i<(N+N1); i++){
        for(j=i+1; j<(N+N1); j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Merged Array in Sorted order\n");
    for(i=0;i<(N+N1);i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return(0);
}
