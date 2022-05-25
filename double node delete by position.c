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
void deletenode(int j)
{
  struct node *temp1=head;
  if(j==1){
    head=temp1->next;
    free(temp1);
    return;
  }
  int i;
  for(i=0;i<j-2;i++){
    temp1=temp1->next;}
    struct node *temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
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
