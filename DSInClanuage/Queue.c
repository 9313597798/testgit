// #include<stdio.h>
// #include<conio.h>
// #include<stdbool.h>

// int front =-1;
// int rear=-1;
// #define max 5
// int Q[max];

// void main()
// {
//     enQueue(10);
//     enQueue(20);
//     enQueue(30);
//     //deQueue();
//     display();
// }
// bool isFull()
// {
//     if(front =0 && rear>=max-1)
//     return true;
//     else
//     return false;
// }
// bool isEmpty()
// {
//     if(front ==-1 && rear==-1)
//     return true;
//     else
//     return false;
// }

// void enQueue(int data)
// {
//     if(isFull())
//     {
//         printf("Queue is full");
//         return ;
//     }
//    rear++;
//    Q[rear]=data;
//    //printf("%d\n",Q[rear]);
//    if(front ==-1)
//    {
//    front=0;
//    }
// }
// void display()
// {
//     if(isEmpty())
//     {
//         return;
//     }
//     for(int i=front; i<=rear; i++)
//     {
//         printf("%d  ",Q[i]);
//     }
// }
// void deQueue()
// {
//     if(isEmpty())
//     {
//         return;
//     }
//     if(front==rear)
//     {
//         front=0;
//     }
//     // if(front==-1 )
//     // {
//     //     front=0;
//     // }
//     front++;
// }

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int f=-1,r=-1;
#define max 5
int Q[max];
void main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    //display();
    deQueue();
    display();
}
bool isEmpty()
{
    if(f==-1 && r==-1)
    return true;
    else
    return false;
}
bool isFull()
{
    if(f==0 && r>=max-1)
    return true;
    else
    return false;
}
void enQueue(int data)
{
    if(isFull())
    {
        printf("Queue is Full");
        return;
    }
    r++;
    Q[r]=data;
}
void display()
{
    if(isEmpty())
    {
        return;
    }
    for(int i=f; i<=r; i++)
    {
        printf("%d\n",Q[i]);
    }
}
void deQueue()
{
    if(isEmpty())
    return;
    if(f==r)
    f=0;
    if(f==-1)
    f=0;
    f++;
}