#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct even
{
    int data1;
    struct even *next1;
};
struct odd
{
    int data2;
    struct odd *next2;
};
struct node *head;
struct even *head1=NULL;
struct odd *head2=NULL;
void display_even()
{
    if(head1==NULL)
    {
        printf("even data:\n");
    }
    else{
        printf("even list: ");
        struct even *temp=head1;
        while(temp!=NULL)
        {
            printf("%d",temp->data1);
            if(temp->next1 !=NULL)
            {
                printf(",");
            }
            temp=temp->next1;
        }

    }
}
void display_odd()
{
    if(head2==NULL)
    {
        printf("odd data:\n");
    }
    else{
        printf("odd list: ");
        struct odd *temp=head2;
        while(temp!=NULL)
        {
            printf("%d",temp->data2);
            if(temp->next2 !=NULL)
            {
                printf(",");
            }
            temp=temp->next2;
        }

    }
}
void create_even(int n)
{
    int arr[n],i=0,j=0;
    struct node *temp=head;
    while(temp !=NULL)
    {
        if(temp->data%2==0)
        {
            arr[i]= temp->data;
            i++;
        }
        temp=temp->next;
    }
    if(i!=0)
    {
        struct even *n1,*n2;
        n2=(struct even*)malloc(sizeof(struct even));
        n2->data1=arr[j];
        n2->next1=NULL;
        head1=n2;
        n1=head1;
        for(j=1;j<i;j++)
        {
            n2=(struct even*)malloc(sizeof(struct even));
        n2->data1=arr[j];
        n2->next1=NULL;
        n1->next1=n2;
        n1=n1->next1;
        }
    }
}
void create_odd(int n)
{
    int arr[n],i=0,j=0;
    struct node *temp=head;
    while(temp !=NULL)
    {
        if(temp->data%2 !=0)
        {
            arr[i]= temp->data;
            i++;
        }
        temp=temp->next;
    }
    if(i!=0)
    {
        struct odd *m1,*m2;
        m2=(struct even*)malloc(sizeof(struct even));
        m2->data2=arr[j];
        m2->next2=NULL;
        head2=m2;
        m1=head2;
        for(j=1;j<i;j++)
        {
            m2=(struct odd*)malloc(sizeof(struct odd));
        m2->data2=arr[j];
        m2->next2=NULL;
        m1->next2=m2;
        m1=m1->next2;
        }
    }
}
int main()
{
int n,i;
printf("nodes:\n");
scanf("%d",&n);
struct node *s1,*s2;
 s2=(struct node*)malloc(sizeof(struct node));
 printf("node 1:");
 scanf("%d",&s2->data);
 s2->next=NULL;
 head=s2;
 s1=head;
 for(i=1;i<n;i++)
 {
   s2=(struct node*)malloc(sizeof(struct node));
 printf("node %d:",i+1);
 scanf("%d",&s2->data);
 s2->next=NULL;
 s1->next=s2;
 s1=s1->next;
 }
 create_even(n);
 create_odd(n);
 display_even();
 display_odd();
}
