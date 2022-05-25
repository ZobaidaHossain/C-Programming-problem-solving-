
#include<stdio.h>
int main ()
{
    int n,i,j,indegree,outdegree;

    printf("Enter The Amount Of Nodes: ");
    scanf("%d",&n);

    int Adjacent_Matrix[n][n];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter Element %d,%d :",i,j);
            scanf("%d",&Adjacent_Matrix[i][j]);
        }
    }

    printf("Displaying The Matrix: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d  ",Adjacent_Matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(Adjacent_Matrix[i][j]==1)
            {

                printf("%c -> %c \n",i+65,j+65);

            }
        }
    }

    printf("\n");
    printf("\n");

    printf("Indegrees : \n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            indegree=0;
            if(Adjacent_Matrix[i][j]==1)
            {
                indegree++;
            }
        }
        printf("Indegree of %c : %d\n",i+65,indegree);
    }

    printf("\n");
    printf("\n");

    printf("Outdegrees : \n");
    for(i=0; i<n; i++)
    {
        outdegree=0;
        for(j=0; j<n; j++)
        {
            if(Adjacent_Matrix[i][j]==1)
            {
                outdegree++;
            }
        }
        printf("Outdegree of %c : %d\n",i+65,outdegree);
    }

}
