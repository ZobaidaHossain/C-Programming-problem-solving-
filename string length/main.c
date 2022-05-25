#include <stdio.h>


int main()
{
char str1[100];
char str2[100];
int length1=0;
int length2=0;
scanf("%[^\n]s",str1);
getchar();
scanf("%[^\n]s",str2);
for(int i=0;str1[i];i++){
    length1++;
}
str1[length1]=' ';
for(int i=0;str2[i];i++){
    length1=length1 +1 ;
}
str1[++length1]='\0';
puts(str1);

    return 0;
}
