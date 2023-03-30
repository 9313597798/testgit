// #include<stdio.h>
// #include<conio.h>
// #include<stdbool.h>
// int top=-1;
// #define MAX 5
// int S[MAX];
// void main()
// {
//     push(10);
//     push(20);
//     push(30);
//     push(40);
//     push(50);
//     pop();
//     pop();
//     pop();
//     pop();
//     pop();
// }
// bool isFull()
// {
//     if(top>=MAX-1)
//     return true;
//     else
//     return false;
// }
// bool isEmpty()
// {
//     if(top==-1)
//     return true;
//     else
//     return false;
// }
// int push(data)
// {
//     if(isFull())
//     {
//         printf("stack is overflow");
//         return ;
//     }
//     top++;
//     S[top]=data;
//     printf("%d\n",S[top]);
//     return 0;
// }
// int pop()
// {
//     if(isEmpty())
//     {
//         printf("stack is underflow");
//     }
//     S[top];
//     printf("deleted data is=%d\n",S[top]);
//     top--;
   
// }

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>


#define max 5
int top=-1;
int Stack[max];


void main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    peep(3);
    change(1,12);
    //display();
    pop();
    display();
}
bool isEmpty()
{
    if(top==-1)
    return true;
    else
    return false;
}
bool isFull()
{
    if(top>=max-1)
    return true;
    else
    return false;
}
void push(int data)
{
    if(isFull()) 
    {
        printf("stack is overflow\n");
        return ;
    }
    top++;
    Stack[top]=data;
    //printf("%d",Stack[top]);
}
void display()
{
    if(isEmpty())
    {
        printf("stack is empty\n");
        return;
    }
    
    for(int i=0; i<=top; i++)
    {
        printf("%d\n",Stack[i]);
    }
}
void peep(int i)
{
 if(i<=0)
 {
    printf("start index from 1\n");
    return;
 }
 if((top-i+1)<0)
 {
    printf("please valid data\n");
    return;
 }
 printf(" peep data is %d\n",Stack[top-i+1]);
}
void change(int i,int data)
{
    if(i<=0)
    {
        printf("strat index from 1\n");
        return;
    }
    if((top+1-i)<=0)
    {
        printf("please enter a valid data\n");
        return ;
    }
    //printf("after change in stack\n");
    Stack[top+1-i]=data;
   //printf("%d\n",Stack[top+1-i]);
}
void pop()
{
    if(isEmpty())
    {
        printf("stack is underflow");
        //return;
    }
    printf("deleted data is %d\n",Stack[top]);
    top--;
}