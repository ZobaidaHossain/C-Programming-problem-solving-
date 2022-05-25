#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node *link;
};
struct node *head;
void add_node(int P1, int V1, int P2, int V2, int n)
{
    int i;
    struct node *pt = head;
    struct node *pt1 = head;

    struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
    ptr2->num = V1;
    ptr2->link = NULL;

    if(P1 == 1)
    {
        ptr2->link=head;
        head = ptr2;
    }
    else if(P1 == n+1)
    {
        while(pt->link != NULL)
        {
            pt=pt->link;
        }
        pt->link=ptr2;
    }
    else
    {
        for(i=1; i<P1-1; i++)
        {
            pt=pt->link;
        }
        ptr2->link=pt->link;
        pt->link=ptr2;

    }

    struct node *ptr3 = (struct node *)malloc(sizeof(struct node));
    ptr3->num = V2;
    ptr3->link = NULL;

    if(P2 == 1)
    {
        ptr3->link=head;
        head = ptr3;
    }
    else if(P2 == n+1)
    {
        while(pt1->link != NULL)
        {
            pt1=pt1->link;
        }
        pt1->link=ptr3;
    }
    else
    {

        for(i=1; i<P2-1; i++)
        {
            pt1=pt1->link;
        }
        ptr3->link=pt1->link;
        pt1->link=ptr3;
    }


}
int main()
{
    int i, N, p1, p2, v1, v2, che=0;
    struct node *s1, *s2;

    printf("Enter N: ");
    scanf("%d", &N);

    s2=(struct node *)malloc(sizeof(struct node));
    scanf("%d", &s2->num);
    s2->link=NULL;

    head = s2;
    s1 = head;

    for(i=1; i<N; i++)
    {

        s2=(struct node *)malloc(sizeof(struct node));
        scanf("%d", &s2->num);
        s2->link=NULL;

        s1->link=s2;
        s1=s1->link;
    }

    struct node *ptr = head;
    printf("\n enter Previous list: ");

    while(ptr != NULL)
    {
        printf("%d ", ptr->num);
        ptr=ptr->link;
    }

    printf("\n enter the first position: ");
    scanf("%d", &p1);
    printf("Value: ");
    scanf("%d", &v1);

    printf("\n enter the second position: ");
    scanf("%d", &p2);
    printf("Value: ");
    scanf("%d", &v2);

    add_node(p1, v1, p2, v2, N);

    struct node *ptr1 = head;

    printf("\nAfter Inserting two New Nodes:\nThe List is:\n");

    while(ptr1 != NULL)
    {
        printf("%d ", ptr1->num);
        che++;
        ptr1=ptr1->link;
    }
    printf("\nTotal node: %d\n", che);

    return (0);
}
