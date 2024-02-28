#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the operation which you want to do (1,2):");
    printf(" \n 1 for Addition \n 2 for Substraction \n 3 for Division \n 4 for Multiplication.");
    scanf("%d",&b);

    printf("Enter the second number:");
    scanf("%d",&c);
    switch (b)
    {
    case 1:
     d=a+c;
     printf("\nThe Addition of %d & %d is %d.",a,c,d);

        break;
    case 2:
     d=a-c;
     printf("\nThe Substraction of %d & %d is %d.",a,c,d);
        break;
    case 3:
     d=a/c;
     printf("\nThe Division of %d & %d is %d.",a,c,d);
        break;  
    case 4:
     d=a*c;
     printf("\nThe Multiplication of %d & %d is %d.",a,c,d);
        break;      
    default:
     printf("\n\nEnter the valid operation.\n\n");
        break;
    }
}