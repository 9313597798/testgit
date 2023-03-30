#include<stdio.h>
#include<stdbool.h>
int r=-1;
int f=-1;
#define max 3
int CQ[max];
void main()
{
    enQueue(1);
  enQueue(2);
  enQueue(3);
  // Fails to enqueue because MAX SIZE=3
  enQueue(4);
  display();
  deQueue();
  enQueue(4);
  display();
}

void enQueue(int data)
{
    if((r+1)%max==f)
    {
        printf("Queue is full");
        return;
    }
    else if(f==-1)
    {
        f=0;
    }
    r=(r+1)%max;
    CQ[r]=data;
}
void display()
{
    int i;
    if(f==-1 )
    {
        printf("empty queue");
    }
     else
     {
     for( i=f; i!=r; i=(i+1)%max)
     {
        printf("%d\t",CQ[i]);
     }
     }
     printf("%d",CQ[i]);
}

void deQueue()
{
    if(f==-1)
    {
        printf("queue is empty");
        return;
    }
    else
    {
        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else
        {
            f=(f+1)%max;
        }
    }
}