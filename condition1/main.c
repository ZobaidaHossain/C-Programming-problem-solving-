#include <stdio.h>
int main()
{
    int M,N,i,k,Sum=0;
    for(k=0;k<1000;k++){
    scanf("%d %d", &M,&N);
    if(M<=0 || N<=0){
        break;
    }
    else {

    if(M<N){

        for(i=M;i<=N;i++){
                printf("%d",i);
                Sum=Sum+i;
            }
            printf("Sum=%d\n",Sum);
    }
    else if(M>N){
        for(i=N;i<=M;i++){
            printf("%d",i);
            Sum=Sum+i;
        }
        printf("Sum=%d\n",Sum);

    }
    }
    }
    return 0;
}
