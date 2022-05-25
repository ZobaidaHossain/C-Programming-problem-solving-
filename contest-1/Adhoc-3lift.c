#include<stdio.h>
int main(){
    int my_pos,lift_pos,gr=0;
    int T,i,sum=0,s;
    int go=4,open=3,close=3,enter=5,exit=5;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%d %d",&my_pos,&lift_pos);
    s=abs(lift_pos-my_pos)*go;
    sum=s+enter+open+close+go*(my_pos-gr)+exit+open;
printf("Case %d: %d\n",i,sum);
    }


}
