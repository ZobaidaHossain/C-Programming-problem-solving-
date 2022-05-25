#include <stdio.h>


int main()
{
    char str[100];
    int cnt = 0;
    scanf("%s",str);
    for(int i=0;str[i];i++)
        if(str[i]=='0' || str[i]=='9')
            cnt++;

    printf("Word: %d\n",cnt+1);
    return 0;
}
