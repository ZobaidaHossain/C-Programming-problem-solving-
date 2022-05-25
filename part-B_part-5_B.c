#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newnode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
};
void postorder(struct node* node)
{
    if(node==NULL)
        return;

    postorder(node->left);
    postorder(node->right);
    printf("%d ", node->data);
}
void inorder(struct node* node)
{
    if(node == NULL)
        return;

    inorder(node->left);
     printf("%d ", node->data);
    inorder(node->right);

}
void preorder(struct node* node)
{
    if(node==NULL)
        return;

        printf("%d ", node->data);
    preorder(node->left);
    preorder(node->right);

}
int main()
{
    struct node *root =newnode(10);
    root->left=newnode(20);
    root->right=newnode(30);
    root->left->left=newnode(40);
    root->left->right=newnode(50);
    printf("\n tree preorder:\n");
    preorder(root);
     printf("\n tree inorder:\n");
    inorder(root);
     printf("\n tree postorder:\n");
    postorder(root);

    return 0;
}
