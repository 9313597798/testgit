#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int top=-1;
#define MAX 5
int S[MAX];
void main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    print();
    pop();
    peep(3);
   change(1,56);
  print();

}
bool isFull()
{
    if(top>=MAX-1)
    return true;
    else
    return false;
}
bool isEmpty()
{
    if(top==-1)
    return true;
    else
    return false;
}
void  push(int data)
{
    if(isFull())
    {
        printf("stack is overflow");
        return ;
    }
    top++;
    S[top]=data;
    
}
void pop()
{
    if(isEmpty())
    {
        printf("stack is underflow");
    }
    printf("deleted data is= %d\n",S[top]);
    top--;
}
void print()
{
    for(int i=0; i<=top; i++)
    {
        printf("%d\n",S[i]);
    }
}
void peep(int i)
{
    if(i<=0)
    {
        printf("start index from 1");
        return;
    }
    if((top-i+1)<0)
    {
        return;
    }
    printf("peep data");
    printf("%d\n",S[top-i+1]);
}
void change(int i,int data)
{
    if(i<=0)
    {
        printf("start index from 1");
        return;
    }
    if((top-i+1)<0)
    {
        return;
    }
    printf("after change in stack \n");
    S[top-1+i]=data;
}