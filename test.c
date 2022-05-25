#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node* left;
     struct node* right;
};


struct node* newNode(int data)
{

        for(i=0;i<n;i++)
       struct node* node = (struct node*)
                                  malloc(sizeof(struct node));
     scanf("%d",&node->data);
     node->left = NULL;
     node->right = NULL;

     return(node);
}


void printPostorder(struct node* node)
{
     if (node == NULL)
        return;


     printPostorder(node->left);

     printPostorder(node->right);

     printf("%d ", node->data);
}


void printInorder(struct node* node)
{
     if (node == NULL)
          return;


     printInorder(node->left);


     printf("%d ", node->data);

     printInorder(node->right);
}


void printPreorder(struct node* node)
{
     if (node == NULL)
          return;


     printf("%d ", node->data);

     printPreorder(node->left);

     printPreorder(node->right);
}

int main()
{




   struct node *root  = newNode(10);
     root->left             = newNode(20);
     root->right           = newNode(30);
     root->left->left     = newNode(40);
     root->left->right   = newNode(50);

     printf("\nPreorder traversal of binary tree is \n");
     printPreorder(root);

     printf("\nInorder traversal of binary tree is \n");
     printInorder(root);

     printf("\nPostorder traversal of binary tree is \n");
     printPostorder(root);


     return 0;
}
