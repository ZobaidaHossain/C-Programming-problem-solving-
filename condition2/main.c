#include <stdio.h>
int main()
{
    int a,b,i,c,m=0,n=0;
    scanf("%d",&c);
    for(i=1;i<=c;i++){
            scanf("%d %d",&a,&b);
    if(a>b){
        m++;
    }
    if(b>a){
        n++;
    }
    }
    if(m>n){
        printf("Mishka\n");
    }
    else if(n>m){
        printf("Chris\n");
    }
    else if(m==n){
        printf("Friendship is magic!^^\n");
    }

    return 0;
}
