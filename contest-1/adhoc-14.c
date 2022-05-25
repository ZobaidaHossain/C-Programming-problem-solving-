
#include<stdio.h>
int main(){
    int n,digit,count=0,i;

    scanf("%d",&n);
     char str[100];
     scanf("%s",str);
    for(i=0;i<n;i++){
        if(str[i]=='8'){
            count++;
        }
    }
    digit=n/11;
    if(count<=digit){
        printf("%d",count);
    }
    else if(digit<=count){
        printf("%d",digit);
    }
}
