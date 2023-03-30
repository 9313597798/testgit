#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    int n,i;
    printf("Enter a number of element for the array");
    scanf("%d",&n);
    //dynamic memory allocation
    ptr=(int*)malloc(n*sizeof(int));
    //ptr=(int*)calloc(n,sizeof(int));
    //check if memory has been allocation or not
    if(ptr==NULL)
    {
        printf("memory not allocation\n");
        exit(0);

    }
    else
    {
        printf("memory allocation is succesfully\n");
    
        //get the element of array
        for(i=0; i<n; i++)
        {
            ptr[i]=i+1;
        }
            //print all member
        for(i=0; i<n; i++)
        {
            printf("%d\n",ptr[i]);
        }
        
    }
}
