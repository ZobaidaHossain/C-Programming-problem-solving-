#include<stdio.h>
int main(){
int a[100],n,result=-1;
printf("how many numbers do u want to take:");
scanf("%d\n",&n);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}

int key;
printf("which number do u want to search:");
scanf("%d",&key);
int left=0;
int right=n-1;
int mid;

while(left<=right){
mid=(left+right)/2;

if(a[mid]==key){
result=mid;

}
else if(a[mid]>key){
right=mid-1;

}
else{
left=mid+1;


}

}
printf("No",mid);
//printf("No",mid,a[mid]);
//printf("left=%d\n right=%d\n mid=%d\n a[%d]=%d\n",left,right,mid,mid,a[mid]);
return 0;
}
