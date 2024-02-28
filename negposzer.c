#include<stdio.h>
int main()
{ 
    int g;
    printf("Enter a number:");
    scanf("%d",&g);
    if(g=0)
    {
        printf("%d is 0.\n");
    }
    else if(g<0)
    {
        printf("%d is positive number.\n");
    }
    else
    {
        printf("%d is negetive number.\n");
    }
    
    
    return 0;
}