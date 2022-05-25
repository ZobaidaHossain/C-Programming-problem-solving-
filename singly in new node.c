#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data1;
float data2;
struct node *next;
}node;
node*head=NULL;

void display(){
    node *temp = head;
	while(temp != NULL) {
		printf("%d\n",temp->data1);
		printf("%f\n",temp->data2);
		temp = temp->next;
	 }
}
int main()
{
node*n1=(node*)malloc(sizeof(node));
n1->data1=19;
n1->data2=3.5;
n1->next=NULL;
head=n1;
node*n2=(node*)malloc(sizeof(node));
n2->data1=30;
n2->data2=4.5;
n2->next=NULL;

node*n3=(node*)malloc(sizeof(node));
n3->data1=40;
n3->data2=5.5;
n3->next=NULL;
n1->next=n2;
n2->next=n3;

display();
display();
return 0;
}
