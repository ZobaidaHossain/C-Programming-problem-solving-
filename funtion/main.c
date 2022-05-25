#include <stdio.h>
#include<string.h>
int call(char name[25]);
{
   scanf("%[^\n]s",name);
   int len= strlen(name);
   return name[len-1];
}
int main(){
    char name[25];
    printf("%c\n",last(name));
}

