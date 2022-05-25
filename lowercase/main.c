#include <stdio.h>
#include <stdlib.h>

int main()
{
    char upper;
    printf("enter any uppercase letter: ");
    scanf("%c",&upper);
    printf("The lowercase letter : %c",upper+32);
    return 0;
}
