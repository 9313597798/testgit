#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student_record
{
    int roll_no,sem;
    char name[30],branch[30];

};
struct student_record initilizeStudent()

{
 struct student_record s1;
 s1.roll_no=1;
 s1.sem=2;
 strcpy(s1.name,"Dinesh");
 strcpy(s1.branch,"CSE");
 return s1;
 
}
void printstudent(struct student_record s1)
{
    printf("name=%s\n branch=%s\n roll_no=%d\n sem=%d\n",s1.name,s1.branch,s1.roll_no,s1.sem);

}
void main()
{
    struct student_record s;
    s=initilizeStudent();
    printstudent(s);
    
}
