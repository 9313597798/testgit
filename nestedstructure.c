#include<stdio.h>
#include<string.h>
typedef struct department_info
{
    char name[30];
    int dept_id;
}department;
typedef struct student_info
{
    int id,sem;
    char name[30];
    department dept;

}student ;
void main()
{
    student s;
    s.id=1;
    s.sem=2;
    strcpy(s.name,"dinesh");
    s.dept.dept_id=123;
    printf("enter a depertment name");
    scanf("%s",s.dept.name);
    printf("%d\n %d\n %d\n %s\n %s\n",s.id,s.sem,s.dept.dept_id,s.dept.name,s.name);

}