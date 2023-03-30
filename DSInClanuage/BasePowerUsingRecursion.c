// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main()
// {
//     int base;
//     int power;
//     printf("enter a base\n");
//     scanf("%d",&base);
//     printf("enter a power\n");
//     scanf("%d",&power);
//     int n=EXPO(base,power);
//     printf("answer is=%d",n);
// }
// int EXPO(int base,int power)
// {
//     if(base==0)
//     {
//         return 1;
//     }
//     if(power==0)
//     {
//         return 1;
//     }
//      return base*pow(base,power-1);
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void main()
// {
//     int base,power;
//     printf("Enter a base\n");
//     scanf("%d",&base);
//     printf("enter a power\n");
//     scanf("%d",&power);
//     printf("answer is %d\n",EXPO(base,power));
// }
// int EXPO(int base,int power)
// {
//     if(base==0)
//     {
//         return 1;
//     }
//     if(power==0)
//     {
//         return 1;
//     }
//     return base*pow(base,power-1);
// }


#include<stdio.h>
#include<conio.h>
#include<math.h>
void  main()
{
    int base,power;
    printf("enter a power and base\n");
    scanf("%d %d",&base,&power);
    printf("answer is %d",expo(base,power));
}
int expo(int base,int power)
{
    if(base==0)
    {
        return 1;
    }
    else if(power==0)
    {

        return 1;
    }
    // if(base==0 && power==0)
    // {
    //     return 1;
    // }
    else
    {
        return base*pow(base,power-1);
    }
}