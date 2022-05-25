#include<stdio.h>
#include<stdlib.h>

typedef struct BST
{
    int data;
    struct BST *lchild, *rchild;
}node;

node *root = NULL;
node *new_node = NULL;


//*** Code for Create New Node ***//
node *get_node()
{
    int value;
    new_node = malloc(sizeof(node));
    printf("\nEnter the value for the node: ");
    scanf("%d", &value);

    new_node -> data = value;
    new_node -> lchild = NULL;
    new_node -> rchild = NULL;

    return new_node;
}


//*** Code for Insertion ***//
void insert_node(node *root, node *new_node)
{
    if(new_node -> data < root -> data)
    {
        if(root->lchild == NULL)
        {
            root->lchild = new_node;
        }
        else
        {
            insert_node(root->lchild,new_node);
        }
    }

    else
    {
        if(root -> rchild == NULL)
        {
            root->rchild = new_node;
        }
        else
        {
            insert_node(root->rchild, new_node);
        }
    }
}


//** Preorder Traverse ***//
void preorder(node *temp)
{

   if(temp != NULL)
    {
        printf("%d  ",temp ->data);
        preorder(temp->lchild);
        preorder(temp->rchild);
    }
}


//** Inorder Traverse ***//
void inorder(node *temp) {
   if (temp != NULL)
   {
      inorder(temp->lchild);
      printf("%d ", temp->data);
      inorder(temp->rchild);
   }
}


//** Postorder Traverse ***//
void postorder(node *temp) {
   if (temp != NULL)
   {
      inorder(temp->lchild);
      inorder(temp->rchild);
      printf("%d ", temp->data);
   }
}


//** Finding the Minimum Node ***//
void Find_Min(node *temp)
{
    if(temp == NULL)
        printf("\n\nThere is no node in the tree!!\n\n");

    else
    {
        while(temp->lchild != NULL)
        {
            temp = temp -> lchild;
        }
        printf("\n\n\nThe minimum value in the tree is : %d\n",temp->data);
    }
}


//** Finding the Maximum Node ***//
void Find_Max(node *temp)
{
    if(temp == NULL)
        printf("\n\nThere is no node in the tree!!\n\n");

    else
    {
        while(temp->rchild != NULL)
        {
            temp = temp -> rchild;
        }
        printf("\nThe Maximum value in the tree is : %d\n\n",temp->data);
    }
}

//** Main Function ***//
void main()
{
    int n , i;
    printf("\n\nEnter the number of nodes you wnt to insert in the BST: ");
    scanf("%d", &n);

    for(i = 0; i<n ; i++)
    {
        //create a node
        new_node = get_node();

        // insert into the tree
        if(root == NULL)
        {
            root = new_node;
        }
        else
        {
            insert_node(root, new_node);
        }
    }

    printf("\n\nThe preorder traverse of the tree:  ");
    preorder(root);

    printf("\n\nThe Inoder traverse of the tree:  ");
    inorder(root);

    printf("\n\nThe postorder traverse of the tree:  ");
    postorder(root);


     Find_Min(root);
     Find_Max(root);
}
