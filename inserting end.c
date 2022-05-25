#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
node*head=NULL;

int main(){
int i,n=4;
for(i=0;i<n;i++){
node*n1=(node*)malloc(sizeof(node));
n1->data=20;
n1->next=NULL;
head=n1;
node*n2=(node*)malloc(sizeof(node));
n2->data=30;
n2->next=NULL;
if (head == NULL)
{
        head = n1;
}
else
{
node *temp = head;

while( temp -> next != NULL)
{
	temp =  temp-> next;
}

temp -> next = n1;
}

}
}
