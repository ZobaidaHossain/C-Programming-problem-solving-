#include <stdio.h>


int main()
{
    int buy,sell,p;
    printf("enter the buy:");
    scanf("%d",buy);
    printf("enter the sell");
    scanf("%d",sell);
    if(buy>sell)
    {
       p=buy-sell;
        printf("\nprofit:%d\n",p);

    }
    else if(buy<sell)
    {
        p=sell-buy;
        printf("\nlose:%d\n",p);

    }
    else{
        printf("\nequal");
    }

    return 0;
}
