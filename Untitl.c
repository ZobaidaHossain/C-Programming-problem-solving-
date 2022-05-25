#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Zobaida_MyTrainSchedule1
{
    int train_num;
    char express_name[50];
    struct Zobaida_MyTrainSchedule1 *next;
};

struct Zobaida_UdayanRoutes1{
    int timeS;
    char RouteName[50];
    int timeE;
    struct Zobaida_UdayanRoutes1 *next;
};

struct Zobaida_UdayanRoutes2{
    int time;
    char RouteName[50];
    int timeE;
    struct Zobaida_UdayanRoutes2 *next;
};

struct Zobaida_MeghnaRoutes1{
    int time;
    char RouteName[50];
    int timeE;
    struct Zobaida_MeghnaRoutes1 *next;
};

struct Zobaida_MeghnaRoutes2{
    int time;
    char RouteName[50];
    int timeE;
    struct Zobaida_MeghnaRoutes2 *next;
};

struct Zobaida_AgnibinaRoutes1{
    int time;
    char RouteName[50];
    int timeE;
    struct Zobaida_AgnibinaRoutes1 *next;
};

struct Zobaida_AgnibinaRoutes2{
    int time;
    char RouteName[50];
    int timeE;
    struct Zobaida_AgnibinaRoutes2 *next;
};

struct Zobaida_UdayanRoutes1 *head2;

struct Zobaida_UdayanRoutes2 *head3;

struct Zobaida_MeghnaRoutes1 *head4;

struct Zobaida_MeghnaRoutes2 *head5;

struct Zobaida_AgnibinaRoutes1 *head6;

struct Zobaida_AgnibinaRoutes2 *head7;


struct Zobaida_MyTrainSchedule1 *head;

void Zobaida_UpdateTrainSchedule()
{
    int counter;
    printf("\nEnter the train number which trains schedule you want to delete: ");
    scanf("%d", &counter);

    if(counter == 1)
    {
        int nS, nE;
        char route[50];
        printf("\nEnter the Routes name which routes schedule you want to update: ");
        scanf("%s", route);

        printf("\nEnter the new starting time: ");
        scanf("%d", &nS);

        printf("\nEnter the new ending time: ");
        scanf("%d", &nE);

        struct Zobaida_UdayanRoutes1 *temp1 = head2;
        while(temp1 != NULL)
        {
            if(strcmp(route, temp1->RouteName)==0)
            {
                temp1->timeS = nS;
                temp1->timeE = nE;
            }
            temp1 = temp1->next;
        }
    }
}

void  Zobaida_DisplayTrainSchedule()
{
    int i=1;
    struct Zobaida_MyTrainSchedule1 *temp = head;
    while(temp != NULL)
    {
        printf("\nTrain Number: %d\n", temp->train_num);
        printf("Express Name: %s\n", temp->express_name);
        if(i == 1)
        {
           struct Zobaida_UdayanRoutes1 *temp1 = head2;
           while(temp1 != NULL)
           {
               printf("\nRoutes name: %s\n", temp1->RouteName);
               if(temp1->timeS == 0)
               {
                 printf("Starting time of train: -----\n");
               }
               else
               {
                   printf("Starting time of train: %d\n", temp1->timeS);
               }
               if(temp1->timeE == 0)
               {
                 printf("Ending time of train: -----\n");
               }
               else
               {
                   printf("Ending time of train: %d\n", temp1->timeE);
               }
               temp1 = temp1->next;
           }
            printf("Closed days: Saturday\n");
        }
        i++;
        temp = temp->next;
    }
}

int main()
{
    int i;

    struct Zobaida_MyTrainSchedule1 *s1, *s2, *s3, *s4, *s5, *s6;
    s2 = (struct Zobaida_MyTrainSchedule1 *)malloc(sizeof(struct Zobaida_MyTrainSchedule1));
    s2->train_num = 723;
    strcpy(s2->express_name, "Udayan Express");
    s2->next = NULL;

    head = s2;

    s1 = (struct Zobaida_MyTrainSchedule1 *)malloc(sizeof(struct Zobaida_MyTrainSchedule1));
    s1->train_num = 724;
    strcpy(s1->express_name, "Udayan Express");
    s1->next = NULL;

    s3 = (struct Zobaida_MyTrainSchedule1 *)malloc(sizeof(struct Zobaida_MyTrainSchedule1));
    s3->train_num = 729;
    strcpy(s3->express_name, "Meghna Express");
    s3->next = NULL;

    s4 = (struct Zobaida_MyTrainSchedule1 *)malloc(sizeof(struct Zobaida_MyTrainSchedule1));
    s4->train_num = 730;
    strcpy(s4->express_name, "Meghna Express");
    s4->next = NULL;

    s5 = (struct Zobaida_MyTrainSchedule1 *)malloc(sizeof(struct Zobaida_MyTrainSchedule1));
    s5->train_num = 735;
    strcpy(s5->express_name, "Agnibina Express");
    s5->next = NULL;

    s6 = (struct Zobaida_MyTrainSchedule1 *)malloc(sizeof(struct Zobaida_MyTrainSchedule1));
    s6->train_num = 736;
    strcpy(s6->express_name, "Agnibina Express");
    s6->next = NULL;

    s2->next = s1;
    s1->next = s3;
    s3->next = s4;
    s4->next = s5;
    s5->next = s6;

    struct Zobaida_UdayanRoutes1 *S1, *S2, *S3, *S4, *S5, *S6, *S7, *S8, *S9, *S10, *S11;

    S1 = (struct Zobaida_UdayanRoutes1 *)malloc(sizeof(struct Zobaida_UdayanRoutes1));
    strcpy(S1->RouteName, "Chittagong");
    S1->timeS = 0;
    S1->timeE = 2145;
    S1->next = NULL;

    head2 = S1;

    Zobaida_DisplayTrainSchedule();

    int update;

    printf("\nIf you want to update press 1: ");
    scanf("%d", &update);

    if(update == 1)
    {
      Zobaida_UpdateTrainSchedule();

      Zobaida_DisplayTrainSchedule();
    }

    return(0);
}
