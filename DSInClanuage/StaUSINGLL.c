#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void main()
{
    insertBeg(10);
    insertBeg(20);
    insertBeg(30);
    insertBeg(40);
    display();
    printf("after delete\n");
    deleteBeg();
    display();
}
void insertBeg(int data)
{
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
//printf("delete data is\n");
void deleteBeg()
{
    struct node *temp=head;
    head=head->next;
    free(temp);
}
