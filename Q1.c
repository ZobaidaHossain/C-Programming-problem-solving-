#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct zobaida_node
{
char name[20];
char num[20];
struct zobaida_node *next;
};
struct zobaida_node *head;
void zobaida_sorting(int n)
{
int i,j;
char str[20],str2[20];
struct zobaida_node *temp=head, *temp1;
for(i=0;i<n;i++)
{
temp1= temp->next;
for(j=i+1;j<n;j++)
{
if(strcmp(temp->name, temp1->name)>0)
{
strcpy(str, temp->name);
strcpy( temp->name, temp1->name);
strcpy(temp->name,str);
strcpy(str2, temp->num);
strcpy( temp->num, temp1->num);
strcpy( temp1->num, str2);
}
temp1=temp1->next;
}
temp=temp->next;
}
}
void zobaida_Display()
{
    struct zobaida_node *temp = head;

    printf("\nContact List\n");
    while(temp != NULL)
    {
        printf("Name :%s\tPhone :%s\n", temp->name, temp->num);
        temp = temp->next;
    }
}

int main()
{
    int i, n;
    struct zobaida_node *s1, *s2;

    printf("Number of your students: ");
    scanf("%d", &n);

    s2 = (struct zobaida_node *)malloc(sizeof(struct zobaida_node));
    printf("\nName: ");
    scanf("%s", s2->name);
    printf("Phone : ");
    scanf("%s", s2->num);
    s2->next = NULL;

    head = s2;
    s1 = head;

    for(i=1; i<n; i++)
    {
        s2 = (struct zobaida_node *)malloc(sizeof(struct zobaida_node));
        printf("Name: ");
        scanf("%s", s2->name);
        printf("Phone : ");
        scanf("%s", s2->num);
        s2->next = NULL;

        s1->next = s2;
        s1 = s1->next;
    }

    zobaida_sorting(n);
    zobaida_Display();

    return(0);
}

