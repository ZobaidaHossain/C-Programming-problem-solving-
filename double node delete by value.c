#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *pre;
}node;
node *head=NULL;
node *temp=NULL;
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void createlist()
{
  node *n1=(node*)malloc(sizeof(node));
  scanf("%d",&n1->data);
  n1->next=NULL;
  if(head==NULL){
    head=n1;
  }
  else{
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=n1;
  }
}

void deletenode(int x)
{
   temp=head;
   if(x==head->data){
    head=head->next;
    free(temp);
   }
   else{
    node *pre=NULL;
    while(temp!=NULL && temp->data!=x){
        pre=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        printf("%d does not exist",x);
    }
    else{
        pre->next=temp->next;
        free(temp);
    }
   }
}


int main()
{
    int i,n=4;
    for(i=0;i<n;i++){
        createlist();
    }
    display();
    int j;
    printf("enter the delete node\n");
    scanf("%d",&j);
    deletenode(j);
    display();
    return 0;
}
