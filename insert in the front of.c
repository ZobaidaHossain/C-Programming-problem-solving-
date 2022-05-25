#include <stdio.h>
#include <stdlib.h>
 typedef struct node{
     int data;
     struct node*next;
 }node;
 node*head=NULL;
 node*temp=NULL;

 int main()
 {
     int i,n=4;

     for(i=0;i<n;i++){
        node*n1=(node*)malloc(sizeof(node));
        scanf("%d",&n1->data);
        n1->next=NULL;

        if(head==NULL)
        {
          head=n1;
        }
        else{
         n1-> next = head;

        head = n1;

        }
     }


      temp=head;
     while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
     }


 }
