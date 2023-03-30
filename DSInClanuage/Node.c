// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// struct node 
// {
//     int data;
//     struct Node *next;
// };
// struct node *head =0;
// void main()
// {
//     struct node *n1;
//     n1=malloc (sizeof(struct node));
//     n1->data=10;
//     n1->next=0;
//     printf("%d\n",n1->data);
//     printf("%d\n",n1->next);
//     head=n1;
// }

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=0;
void main()
{
    struct node *n1;
    struct node *n2;
    head=n1;
    n1=malloc(sizeof(struct node));
    n2=malloc(sizeof(struct node));
    n1->data=10;
    n1->next=0;
    printf("%d\n",n1->data);
    printf("%d\n",n1->next);
    n2->data=20;
    n1->next=n2;
    printf("%d\n",n2->data);
    printf("%d\n",n1->next);

}