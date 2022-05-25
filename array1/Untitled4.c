
int main()
{
    int a[100],i,j,n,tmp;
    scanf("%d",&n);


 for(i=0;i<n;i++){
printf("element - %d : ",i);
scanf("%d",&a[i]);
}
 for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
    if(a[i]<a[j]){
       tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
    }

 }
 }
 for(i=0;i<n;i++){
    printf("%d\n",a[i]);
 }


printf("\n");
}
