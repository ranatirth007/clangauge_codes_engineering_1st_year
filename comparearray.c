#include<stdio.h>
int main()
{
   
   int i,a[100],b[100],s;
   printf("Enter the number of the elements in  array :");
   scanf("%d",&s);
   for(i=0;i<s;i++)
    {
        printf("enter the element at A[%d]:\n",i);
        scanf("%d",&a[i]);

    }
    for(i=0;i<s;i++)
    {
        printf("enter the element at B[%d]:\n",i);
        scanf("%d",&b[i]);

    }
    for(i=0;i<s;i++)
    {
        if(a[i]==b[i])
        {
            printf("elements at index %d is equal.\n",i);
        }
        
        else
         {
            printf("elements at %d index is not equal.\n");

         }
   
    }



return 0;
}