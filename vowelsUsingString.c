#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name[30];
    int count = 0, i;
    printf("Enter a string\n");
    //scanf("%s", &name);
    gets(name);
    while (name[i] != '\0')
    {
        if (name[i] == 'a' || name[i] == 'i' || name[i] == 'u' || name[i] == 'o' || name[i] == 'e')
        {
            printf("vowels present in name at index %d\n", i);
            count++;
        }
        i++;
    }
    if(count==0)
    {
        printf("no vowels\n");
    }
    else{
        printf("no. of vowels is present in name is = %d",count);
    }
}