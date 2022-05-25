
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("input:");
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++){
        printf("%c",str[i]+1);
    }

    return 0;
}
