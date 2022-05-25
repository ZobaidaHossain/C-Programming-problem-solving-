#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",ch);
    switch(ch)
    {
    case E:
        printf("excilant\n");
        break;
    case V:
        printf("very good\n");
        break;
    case G:
        printf("good\n");
        break;
    case A:
        printf("average\n");
        break;
    case F:
        printf("fail\n");
        break;
    default :
        printf("non valied");
    }
}
