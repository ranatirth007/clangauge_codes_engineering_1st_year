#include<stdio.h>
int main()
{
    int a;
    printf("Enter your marks:");
    scanf("%d",&a);
    if(a<10)
    {
        printf("YOUR GRADE ID FF.\n BETTER LUCK NEXT TIME :)");
    }
    else
    {
        switch (a/10)
    {
    case 1:
        printf("Your Grade is FF\n");
        printf("YOU ARE FAIL \n\n BETTER LUCK NEXT TIME. :)\n\n\n");
        break;
    case 2:
    printf("your grade is FF\n");
    break;
    case 3:
    printf("Your Grade is FF\n");
    break;
    case 4:
    printf("Your Grade is DD\n");
    break;
    case 5:
    printf("Your Grade is CC\n");
    break;
    case 6:
    printf("Your Grade is BB\n");
    break;
    case 7:
    printf("Your Grade is AA\n");
    break;
    case 8:
    printf("Your Grade is AA\n");
    break;
    case 9:
    printf("Your Grade is AA\n");
    break;
    default:
    printf("ENTER MARKS BETWEEN 1 TO 100 !!!!");
        break;
    }
    }
    {
    
    
    }

}