 #include<stdio.h>
int main()
{
 int n,i,f=0,s=0,temp=0;
 scanf("%d",&n);
 int zobaida[n];
 for(i=0;i<n;i++)
 {
 printf("element:%d\n",i+1);
 scanf("%d",&zobaida[i]);
 }
 f=zobaida[0];
 s=zobaida[1];
 if(f<s)
 {
 temp=f;
 f=s;
 s=temp;
 }
 for(i=2;i<n;i++)
 {
     if(zobaida[i]>f){
 s=f;
 f=zobaida[i];
 }
 else if(zobaida[i]>s && zobaida[i] !=f)
 {
 s=zobaida[i];
 }
 }
 printf("first large:%d\n",f);
 printf("seconf large:%d\n",s);
}

