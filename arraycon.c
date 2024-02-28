// C program to concatenate 2 arrays


#include<stdio.h>
int main()
{
    int a[100],b[100];
    
    for(int i=0;i<5;i++)
    {
        printf("\n Enter the elements = ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("\n Enter the elements = ");
        scanf("%d",&b[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf(" %d ",a[i]);
        
    }
     for(int i=0;i<5;i++)
    {
        printf(" %d ",b[i]);
        
    }


    return 0;
}