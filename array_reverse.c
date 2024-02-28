#include<stdio.h>
int main()
{
    int a[100],i;
    printf("enter the elements of array");
    for(i=0;i<6;i++)
    {
        printf("enter the value of element at index: %d  :",i);
        scanf("%d",&a[i]);

    }
    printf("your reversed array  is:");

    for(i=5;i>=0;i--)
    {
        printf(" %d",a[i]);
        
        
    }
    printf("\n");
    return 0;
}
