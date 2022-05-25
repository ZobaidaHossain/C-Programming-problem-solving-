#include<stdio.h>
/*Node in tree structure*/
struct bst
{
    struct bst* left;   //pointer to left node
    struct bst* right;  //pointer to right node
    int data;
};
void createBST(struct bst** root,int data)
{
    /*Create a temporary node with left and right child as NULL*/
    struct bst* temp =(struct bst*)malloc(sizeof(struct bst));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    /* pointer used to traverse the tree*/
     //traverse along right side

}
void printPostorder(struct bst* temp)
{
     if (temp == NULL)
        return;


     printPostorder(temp->left);

     printPostorder(temp->right);

     printf("%d ", temp->data);
}


void printInorder(struct bst* temp)
{
     if (temp == NULL)
          return;


     printInorder(temp->left);


     printf("%d ", temp->data);

     printInorder(temp->right);
}


void printPreorder(struct bst* temp)
{
     if (temp == NULL)
          return;


     printf("%d ", temp->data);

     printPreorder(temp->left);

     printPreorder(temp->right);
}

int main()
{
    struct bst* root =NULL;
    int i,n,data;
    printf("enter no. of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        createBST(&root,data);
    }
    printf("\nPreorder traversal of binary tree is \n");
     printPreorder(root);

     printf("\nInorder traversal of binary tree is \n");
     printInorder(root);

     printf("\nPostorder traversal of binary tree is \n");
     printPostorder(root);
               //Pass the root pointer to traverse the tree
}
