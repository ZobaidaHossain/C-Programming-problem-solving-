#include<stdio.h>
int main(){
int n,res=1;
scanf("%d",&n);
for(int i=0;i<n;i++){
res =res+( i * 4);
}
printf("%d\n",res);
return 0;
}
