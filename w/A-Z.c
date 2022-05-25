#include<stdio.h>
int main()
{
    char ch;
    printf("enter the carecter:");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("al");
    }
    else if(ch>='0'&& ch<='9')
    {
        printf("number");
    }
    else{
        printf("special");
    }
return 0;
}



