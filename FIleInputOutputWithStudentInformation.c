// write a student data in a file
#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fptr;
    fptr=fopen("Student.txt","w");


    char name[100];
    int age;
    float cgpa;

    printf("enter a name");
    scanf("%s",name);
    printf("enter a age");
    scanf("%d",&age);
    printf("enter a cgpa");
    scanf("%f",&cgpa);

    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",age);
    fprintf(fptr,"%f\t",cgpa);

    fclose(fptr);

}