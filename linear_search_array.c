#include<stdio.h>
int main()
{
    int d,i,a[100],f;
    printf("Enter the numbers of element in array:");
    scanf("%d",&d);
    for(i=0;i<d;i++)
    {
        printf("enter the element at A[%d]:\n",i);
        scanf("%d",&a[i]);

    }
    printf("enter the element to be search.");
    scanf("%d",&f);
    for(i=0;i<d;i++)
    {
        if(f==a[i])
        {
            printf("sreach found...\n\n\n %d is at a[%d]",f,i);
        }
        else
        {
            printf("search unsuccessful\n\nsearch not found.");
        }

    }
return 0;
}