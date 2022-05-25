#include<stdio.h>
int main(){
char str[100],str1[100];
int i=0,j=0;
scanf("%[^\n]s",str);
while(str[i]!='\0')
{
if(str[i]!='a'&& str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){

str1[j]=str[i];
j++;
}
i++;
}

    printf("\n after delete vowels:%s",str1);



return 0;
}
