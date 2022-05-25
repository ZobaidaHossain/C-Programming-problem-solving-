
#include<stdio.h>
#include<string.h>
int main()
{
    int n,j;
    char s[100];
    scanf("%d",&n);
    scanf("%s",&s);
    int B=0, a=0, g=0, i=0, T=0, O=0;
    for(int j=0; j<n; j++)
    {
        if(s[j]=='M')
            B++;
        else if(s[j]=='A')
            a++;
        else if(s[j]=='G')
            g++;
        else if(s[j]=='I')
            i++;
        else if(s[j]=='C')
            T++;
        else if(s[j]=='R')
            O++;
    }
    if(a>=2 && T>=2 && B>=1 && g>=1 && i>=1 && O>=1)
        printf("Wait! Magic car is coming\n");
    else
        printf("Run! RUn! RuN!\n");
}


