#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,*ptr;
    printf("enter the number\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("sorry");
        exit(0);
    }
    printf("enter the number");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
     printf("print the number");
    for(i=0;i<n;i++){
        printf("address:%p, value:%d\n",ptr+i,*(ptr+i));
    }
    free(ptr);
     printf("after the number");
      for(i=0;i<n;i++){
        printf("address:%p, value:%d\n",ptr+i,*(ptr+i));
    }

    return 0;
}
