#include<stdio.h>
int main(){
    int n,b,p,f,c,h;
    int res=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&b, &p, &f);
        scanf("%d %d",&h,&c);
        if(h>c){
            if((b/2)>=p){
                res=p*h;
                b=(b/2)-p;
                if(b>=f){
                    res=res+f*c;
                }
                else{
                    res=res+b*c;
                }
            }
            else{
                res=(b/2)*h;
            }
        }
        else{
              if((b/2)>=f){
                res=f*c;
                b=(b/2)-f;
                if(b>=p){
                    res=res+p*h;
                }
                else{
                    res=res+b*h;
                }
            }
            else{
                res=(b/2)*c;
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
