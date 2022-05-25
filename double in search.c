#include <stdio.h>
#include <stdlib.h>
typedef struct node{
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
    n1->pre=NULL;
    if(head == NULL){
        head=n1;
    }
    else{
            temp=head;
    while(temp->next!=NULL){;
    temp=temp->next;

      }
      temp->next=n1;
      n1->pre=temp;


}
}
void findnode(int x){
    temp=head;
    while(temp!=NULL && temp->data!=x){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("not found\n");
    }
        else{
            printf("found\n");
        }
}
int main()
{
    int i,n=4,x;
    for(i=0;i<n;i++){
    createlist();
    }
    display();
    printf("search\n");
    scanf("%d",&x);
   findnode(x);


    return 0;
}
