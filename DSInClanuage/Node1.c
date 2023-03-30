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
    n1=malloc(sizeof(struct node));
    n1->data=10;
    head=n1;

    struct  node *n2;
    n2=malloc(sizeof(struct node));
    n2->data=20;
    n1->next=n2;
   // n2->next=0;

    struct node *n3;
    n3=malloc(sizeof(struct node));
    n3->data=30;
    n2->next=n3;
    n3->next=0;


    display();  
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);//print a data
       // printf("%d\n",temp);//print a address
        temp=temp->next;
    }
}

// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *head=0;
// void display()
// {
//     struct node *temp=head;
//     while(temp!=0)
//     {
//         printf("%d\t",temp->data);
//         temp=temp->next;
//     }
// }
// void main()
// {
//     struct node *n1;
//     n1=malloc(sizeof(struct node)); 
//     n1->data=10;
//     head=n1;

//     struct node *n2;
//     n2=malloc(sizeof(struct node));
//     n2->data=20;
//     n1->next=n2;

//     struct node *n3;
//     n3=malloc(sizeof(struct node));
//     n3->data=30;
//     n2->next=n3;

//     display();
// }

