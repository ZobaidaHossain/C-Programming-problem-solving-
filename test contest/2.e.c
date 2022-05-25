#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s[100];
    scanf("%s",s);
    int temp=0;
    int l=strlen(s);
    for(i=0;i<l;i+=2){
        for(j=0;j<l-1;j+=2){
            if(s[j]>s[j+2]){
                temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }
    printf("%s",s);
}
