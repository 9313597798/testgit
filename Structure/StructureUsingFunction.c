#include<stdio.h>
#include<string.h>
struct Student {
    struct Student s1
        int roll;
        float cgpa;
        char name[90];
        
       
    };

void printInfo(struct Student s1);
void main()
{
    struct student s1={1664,98.89,"nayan"};
    printInfo(s1);
}
void printInfo(struct Student s1)
{
    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    printf("%s\n",s1.name);
}