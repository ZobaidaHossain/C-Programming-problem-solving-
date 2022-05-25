#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
    struct node *pre;
}node;
node *head=NULL;
node*temp=NULL;
void reverse_display()
{
    temp=head;
    if(temp==NULL)return;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->pre;

    }
}

int main()
{
    node *n1=(node*)malloc(sizeof(node));
    n1->data=1;
    n1->next=NULL;
    n1->pre=NULL;
    head=n1;
     node *n2=(node*)malloc(sizeof(node));
    n2->data=2;
    n2->next=NULL;
    n2->pre=NULL;
     node *n3=(node*)malloc(sizeof(node));
    n3->data=3;
    n3->next=NULL;
    n3->pre=NULL;
   n1->next=n2;
   n2->pre=n1;
   n2->next=n3;
   n3->pre=n2;

     reverse_display();


    return 0;
}
