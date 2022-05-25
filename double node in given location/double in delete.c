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
void deletenode(int del_node)
{
    node *prenode=NULL;
   temp=head;
   if(del_node==head->data){
    head=head->next;
    head->pre=NULL;
    free(temp);
   }
   else{

    while(temp!=NULL && temp->data!=del_node){

        temp=temp->next;
    }
    prenode=temp->pre;
    if(temp!=NULL){
            if(prenode){
        prenode->next=temp->next;
        if(temp->next!=NULL){
            (temp->next)->pre=prenode;
        }
        free(temp);
    }
   }
}
}


int main()
{
    int i,n=4,del_node;
    for(i=0;i<n;i++){
        createlist();
    }
    display();
    printf("enter the delete node\n");
    scanf("%d",&del_node);
    deletenode(del_node);
    display();
    return 0;
}
