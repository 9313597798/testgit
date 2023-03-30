//pending
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *pre;
    struct node *next;
};
struct node *head,*newn;
void insetBeg(int data)
{
    struct node *newn;
    newn=malloc(sizeof(struct node));
    newn->data;
    newn->pre=NULL;
    newn->next=head;
    head->pre=newn;
    head=newn;
}
void display()
{
    struct node *temp=head;
    if(head==NULL)
    {
        head=newn;
    }
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void main()
{
    insetBeg(10);
    insetBeg(20);
    insetBeg(30);
    display();  
}