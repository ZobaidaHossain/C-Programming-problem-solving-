#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char name[25];
    int price;
    struct node *link;
};

struct node *head;

void display()
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("Name: %s\tPrice: %d\n", temp->name, temp->price);
        temp = temp->link;
    }
}

void Searching()
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        if(ptr->price >= 30000)
        {
            printf("Name: %s\tPrice: %d\n", ptr->name, ptr->price);
        }
        ptr = ptr->link;
    }
}

void Removing(int n)
{
    int i=0, count[n], j=0, k, l;
    struct node *temp = head, *cur=head, *pre;
    while(temp != NULL)
    {
        i++;
        if(temp->price < 10000)
        {
            count[j] = i;
            j++;
        }
        temp = temp->link;
    }
    int informer = 0;
    for(l=0; l<j; l++)
    {
        if(informer != 0)
        {
            count[l] = count[l] - informer;
        }
        cur = head;
        if(count[l] == 1)
        {
            struct node *ptr = head;
            head = head->link;
            free(ptr);
            ptr = NULL;
            informer++;
        }

    }
}

int main()
{
    int i, n;
    printf("Number of Mobile phones: ");
    scanf("%d", &n);

    struct node *s1, *s2;

    s2 = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter name: ");
    scanf("%s", s2->name);
    printf("Enter price: ");
    scanf("%d", &s2->price);
    s2->link = NULL;

    head = s2;
    s1 = head;

    for(i=1; i<n; i++)
    {
        s2 = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter name: ");
        scanf("%s", s2->name);
        printf("Enter price: ");
        scanf("%d", &s2->price);
        s2->link = NULL;

        s1->link = s2;
        s1 = s1->link;
    }

    printf("\n*** Mobile list ***\n");
    display();

    printf("\n*** Mobile above 30K ***\n");
    Searching();

    printf("\n*** Final List ***\n");
    Removing(n);
    display();

    return(0);
}
