#include<stdio.h>
int main(){
int i,a[5],sum=0;
float average;
for(i=0;i<=5;i++){
scanf("%d",&a[i]);
sum=sum+a[i];
average=sum/5;
}
printf("sum:%d\n",sum);
printf("average:%.2f\n",average);
int max=0;
for(i=0;i<=5;i++){
    if(max<a[i]){
        max=a[i];
}
}
printf("max:%d\n",max);
}
