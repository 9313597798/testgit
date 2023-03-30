#include<stdio.h>
struct time_struct
{
    int hour,min,sec;

};
void main()
{
    struct time_struct t;
    printf("enter a value of hour");
    scanf("%d",&t.hour);
    while (t.hour>24)
    {
    printf("enter a value of hour");
    scanf("%d",&t.hour);
    }
    printf("enter a value of min");
    scanf("%d",&t.min);
    while (t.min>60)
    {
    printf("enter a value of min");
    scanf("%d",&t.min);  
    }
    printf("enter a value of sec");
    scanf("%d",&t.sec);
    while (t.sec>60)
    {
        printf("enter a valid value of  sec");
        scanf("%d",&t.sec);
    }
    printf("%d:%d:%d",t.hour,t.min,t.sec);
    
    



}
