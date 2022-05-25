#include <stdio.h>

int main()
{
    int num[5],min=num[0],i;
    printf("enter the number:");
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++){
        if(min>num[i]){
            min=num[i];
        }
    }
    printf("%d\n",min);
    return 0;
}
