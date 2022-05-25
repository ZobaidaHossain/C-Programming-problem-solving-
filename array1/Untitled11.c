#include<stdio.h>
int main(){
int i,a[100],n,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++){
printf("element %d : ",i);
scanf("%d",&a[i]);

}
for(i=0;i<n;i++){
sum=sum+a[i];
}
printf("sum=%d\n",sum);


}
