#include <stdio.h>

int main()
{
    int age;
    scanf("%d",&age);
    if(age>=18)
    {
        printf("eligible\n");
        if(age>=40)
        {
            printf("elder voter\n");
        }
        else {
            printf("younger voter\n");
        }
    }
    else{
        printf("not eligible");
    }
    return 0;
}
