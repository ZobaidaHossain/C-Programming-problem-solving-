#include<stdio.h>
#include<string.h>

int call(int a, int b, int c ,int d){
     if(a>=b && a>=c && a>=d){
        return a;
     }
     if(b>=a && b>=c && b>=d){
        return b;
     }
     if(c>=a && c>=b && c>=d){
        return c;
     }
     if(d>=a && d>=b && d>=c){
        return d;
     }
}
int main(){
    int big, a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    big = call(a, b, c, d);
    printf("%d\n", big);
}
