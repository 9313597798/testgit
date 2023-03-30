#include<stdio.h>
#include<string.h>
// typedef struct student_record
// {
//     int roll_no,sem;
//     char name[32];

// } std ;
union student
{
    int roll_no,sem;
    char name[16];
};
void main()
{
    union student s1;

    strcpy(s1.name, "dinesh");
    s1.sem = 2;
    s1.roll_no = 63;

    printf("name=%c rollno=%d semester=%d.\n", s1.name, s1.roll_no, s1.sem);
}
//thank you for watching hehehe...;