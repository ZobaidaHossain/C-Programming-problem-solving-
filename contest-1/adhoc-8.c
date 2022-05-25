#include<stdio.h>
int main(){
    int t,n;
    int i,j,x;
    int max,min;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%d",&n);
            max=0;
            min=100;
            for(j=1;j<=n;j++){
                scanf("%d",&x);
                if(max<x)
                    max=x;
                if(min>x)
                    min=x;
            }
            printf("%d\n",(max-min)*2);
        }
    }
    return 0;
}
