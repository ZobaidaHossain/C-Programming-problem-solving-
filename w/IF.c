#include <stdio.h>


int main()
{
     int name,roll,phy,che,math,total,percentage,division,sum;
      printf("enter the name:");
      printf("enter the roll:");
      printf("enter the phy number:");
      printf("enter the che number:");
      printf("enter the math number:");
      printf("enter the total number:");
      printf("enter the percentage:");
      printf("enter the division:");
      scanf("%d%d%d%d%d%d%d%d%d",&name,&roll,&phy,&che,&math,&total,&percentage,&division,&sum);
      sum=phy+che+math;
      percentage=sum/3;
      if(percentage>=60){
        printf("first");
      }
      else if(percentage<60 && percentage>=48){
        printf("second");
      }
      printf("\nroll number:%d\n name:%s\n",roll,name);
      printf("phy number:%d\n che number:%d\n math number: %d\n",phy,che,math);

    return 0;
}
