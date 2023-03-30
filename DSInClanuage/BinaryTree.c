#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node *root=0;
struct node *creatnode(int data)
{
    struct node* node=malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}
void preOrder(struct node *node)
{
    if(node==NULL)
    {
        printf("tree is Empty");
        return;
    }
    printf("%d",root->data);
    if(node->left!=NULL)
    preOrder(node->left);
    if(node->right!=NULL)
    preOrder(node->right);
}
void main()
{
    struct node* root=creatnode(1);
    root->left=creatnode(2);
    root->right=creatnode(3);
    preOrder(root);
    printf("\t");
}