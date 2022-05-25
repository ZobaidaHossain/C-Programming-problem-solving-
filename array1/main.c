 #include <stdio.h>

int main()
{
    int a[100],i,j,n;
    scanf("%d",&n);


 for(i=0;i<n;i++){
printf("element - %d : ",i);
scanf("%d",&a[i]);
}
 for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
    if(a[j]<a[i]){
       tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
    }

 }
 }
 for(i=0;i<n;i++){
    printf("%d\n",a[i]);
 }


printf("\n");
}
