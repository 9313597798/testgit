#include<stdio.h>
#include<string.h>
typedef  struct student_record
{
    int roll_no;
    int sem;
    char name[30];
    char branch[30];
}student;
void main()
{
    student s;
    student *ptr=&s;
    ptr->roll_no=1;
    printf("enter a  semester\n");
    scanf("%d",&ptr->sem);
    printf("enter a name\n");
    scanf("%s",ptr->name);
    strcpy(ptr->branch,"CSE");//strcpy(ptr->branch,"CSE");
    printf("\n%d\n %d\n %s\n %s\n",ptr->roll_no,ptr->sem,ptr->name,ptr->branch);
}

// struct student_record 
// {
//     int roll_no,sem;
//     char name[30],branch[30];

// };
// void main()
// {
//     struct student_record s;
//     struct student_record *ptr=&s;
//     ptr->roll_no=1;
//     printf("enter a  semester\n");
//     scanf("%d",&ptr->sem);
//     printf("enter a name\n");
//     scanf("%s",ptr->name);
//     strcpy(ptr->branch,"CSE");
//     printf("\n%d\n %d\n %s\n %s\n",ptr->roll_no,ptr->sem,ptr->name,ptr->branch);


// }

