#include<stdio.h>
#include<string.h>
struct Student 
{
    int roll;
    float cgpa;
    char name[100];
};

void main()
{
    //Basic Structure
    struct Student s1;
    s1.cgpa=9.2;
    s1.roll=1664;
    strcpy(s1.name,"Dinesh");
    printf("%d\n%f\n%s\n",s1.roll,s1.cgpa,s1.name);
    //  struct Student s1={90,78.23,"Dinesh"};
    // printf("%d",s1.roll);
    printf("------------------------\n");




    //Structure Using Array
   struct Student ECE[78];
   ECE[0].roll=45;
   ECE[0].cgpa=9.99;
   strcpy(ECE[0].name,"naresh");
   printf("%f\n",ECE[0].cgpa);
   printf("%s\n",ECE[0].name);
   printf("%d\n",ECE[0].roll);
    printf("------------------------\n");




     //Structure to pointer
  struct Student *ptr=&s1;
    printf("%d\n",(*ptr).roll);
    printf("%s\n",(*ptr).name);
    printf("%f\n",(*ptr).cgpa);
    //anther way
    printf("%d\n",ptr->roll);
    printf("%f\n",ptr->cgpa); 
    printf("%s",ptr->name);




    //Structure Using Function
    

}
