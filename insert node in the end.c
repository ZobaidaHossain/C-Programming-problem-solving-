#include <stdio.h>
#include <stdlib.h>
 typedef struct node{
     int data;
     struct node*next;
 }node;
 node*head=NULL;
 node*temp=NULL;
 void createlist(){
      node*n1=(node*)malloc(sizeof(node));
        scanf("%d",&n1->data);
        n1->next=NULL;

        if(head==NULL)
        {
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
 void display()
 {
      temp=head;
     while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
     }
 }

 int main()
 {
     int i,n=4;
     for(i=0;i<n;i++){
       createlist();
     }
     display();

     for(i=0;i<7;i++){
       createlist();
     }
     printf("\n\n new");
     display();

 }
