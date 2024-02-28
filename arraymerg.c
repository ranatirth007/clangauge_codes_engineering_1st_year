#include<stdio.h>
int main()
{
    int r[100],s[100],i,j;

    printf("enter the number of elements for 1st array:");
    scanf("%d",&j);
    printf("Enter the values for 1st array.");
    for(i=0;i<j;i++)
    {
        printf("enter the element at A[%d]:\n",i);
        scanf("%d",&r[i]);

    }
printf("Enter the values for 2nd array.");
    for(i=0;i<j;i++)
    {
        printf("enter the element at B[%d]:\n",i);
        scanf("%d",&s[i]);

    }
    printf("The merged arrayis....\n");
    for(i=0;i<j;i++)
    {
       printf("%d ",r[i]);

    }
    for(i=0;i<j;i++)
    {
       printf("%d ",s[i]);

    }
    return 0;
}