#include<stdio.h>
int main()
{
    int X,Y,i,sum=0;
    scanf("%d %d", &X, &Y);
    if(X>Y){
        for(i=Y;i<=X;i++){
            if(i % 13 !=0){
                sum=sum + i;
            }
            printf("sum = %d\n",sum);
        }
    }
    else if(Y>X){
        for(i=X;i<=Y;i++){
            if(i % 13 !=0 ){
                sum=sum + i;
            }
        }printf("sum = %d\n",sum);
        return 0;
    }
}
