#include<stdio.h>
int main()
{
    int i,n;
    int tmp=0;
    scanf("%d", & i);
    for(i = 0; i < 5; ++i){
        scanf("%d", &n);
        if(n < 0){
            n = -n;
        }
        if(n % 2 == 0){
                tmp++;

    }
    }
    printf("%d valores parses\n",n);
    return 0;
}

