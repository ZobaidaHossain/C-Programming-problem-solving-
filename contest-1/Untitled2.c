#include<stdio.h>
int TC (int tc){
int i;
for(int  i = 0; i<tc; i++)
  printf("Nothing in going on\n");
return i;

}

int main(){

int ID;

scanf ("%d",&ID);

while ((ID/=3)?100:0){
printf("Something is going on %d",TC(100));
return ID;

}


}
