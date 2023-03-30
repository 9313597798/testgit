#include <stdio.h>
#include <conio.h>
typedef struct time_structure
{
    int hour, min, sec;
} time_structure;
void main()
{
    time_structure t;
    do
    {
        printf("enter a value of hour");
        scanf("%d", &t.hour);
    } while (t.hour > 24);
    do
    {
        printf("enter a value of min");
        scanf("%d", &t.min);

    } while (t.min > 60);
    do
    {
        printf("enter a value of sec");
        scanf("%d", &t.sec);
    } while (t.sec > 60);

    printf("%d:%d:%d", t.hour, t.min, t.sec);
}
