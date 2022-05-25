#include<stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;
 int i;

void main()
{
    printf("\n\t\t*** PUSH Operation ***\n");

  push(44);
  push(41);
  push(33);
  push(12);
  push(10);
  push(5);
    display();
    printf(" POP Operation \n");

    for(i=0;i<4;i++){
    int popped_element = pop();
    printf("\n\tPopped Element is : %d\n\n\n\n", popped_element);
}
}
void push(int data)
{
    if(top == MAX_SIZE - 1 )
    {
        printf("Stack is FULL!!\n");
        return;
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

int pop()
{
    if(top == -1 )
    {
        printf("\nStack is empty! Nothing to pop!!\n\n");
    }
    else
    {
        int element = stack[top];
        top--;
        return element;
    }
}

void display()
{
    if(top == -1)
    {
        printf("\nStack is empty!\n");
    }
    else
    {
        int i;
        printf("\n\tThe stack:\n\n");
        for(i = 0; i <= top; i++)
        {
            printf("\t%d\n", stack[i]);
        }
        printf("\n\tReached at the TOP!!\n");
    }
}
