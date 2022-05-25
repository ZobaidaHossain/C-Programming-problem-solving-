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
       head->pre=n1;
       n1->next=head;
       head=n1;}


}
int main()
{
    int i,n=4;
    for(i=0;i<n;i++){
    createlist();
    }
    display();

    return 0;
}
