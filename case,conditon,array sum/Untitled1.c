#include<stdio.h>
int main(){
    int X[10],i;
    for(i = 0;i < 10;i++)
        scanf("%d", &X[i]);
    for(i = 0;i < 10;i++){
        if(X[i] <= 0)X[i] = 1;
        }
    for(i = 0;i < 10;i++)
        printf("X[%d] = %d\n",X[i],i);
    return 0;
}