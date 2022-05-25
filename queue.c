#include<stdio.h>
#define MAX 6
int Queue[MAX];
int front=-1;
int rear=-1;
int i=0;
int main(){
    printf("\n Enqueue\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    display();
    printf("\n Dequeue\n");
    int num =dequeue();
    printf("removed element:%d\n",num);
    display();
}
void enqueue(int data){
    if(rear>=MAX-1){
        printf("\n queue is full");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        Queue[rear]=data;
    }
}
int dequeue(){
    if(rear==-1){
        printf("\n queue is empty");
    }
    else
    {
        int data=Queue[front];
        front++;
        if(front>rear){
            front=rear=-1;
        }
        return data;
    }
}
void display(){
    printf("\n element are\n");
for(i=front;i<=rear;i++)
    {

     printf("\t%d",Queue[i]);
    }

}
