#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
    struct node *pre;
}node;
node *head=NULL;
node *temp=NULL;
void display()
{
     temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;}
}

void createlist()
{
    node *n1=(node*)malloc(sizeof(node));
    scanf("%d",&n1->data);
    n1->next=NULL;
    n1->pre=NULL;
    if(head==NULL)
    {
        head=n1;
    }
    else{
        head->pre=n1;
        n1->next=head;
        head=n1;
    }
}
void insert(){
    int position,i=0;
    printf("enter the position");
    scanf("%d",&position);

 node *n1=(node*)malloc(sizeof(node));
    printf("enter data\n");
    scanf("%d",&n1->data);

    if(position<0){
        printf("invalid\n");
    }

    if(position == 1){
           node *n1=(node*)malloc(sizeof(node));
    scanf("%d",&n1->data);
    n1->next=NULL;
    n1->pre=NULL;
    if(head==NULL)
    {
        head=n1;
    }
    else{
        head->pre=n1;
        n1->next=head;
        head=n1;
    }
    }
    else{

    while(i<(position-1)){
        temp=temp->next;
        i++;
    }

    }
}

int main()
{
 int i,n=4,position;
 for(i=0;i<n;i++){
createlist();

}

display();


 for(i=0;i<7;i++){
    insert();
 }
 display();

    return 0;
}
