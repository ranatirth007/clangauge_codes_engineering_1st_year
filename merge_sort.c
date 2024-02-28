#include<stdio.h>
#include<math.h>
void array(int n[], int i, int j)
{
    printf("\n-----------------------------------------------------------------\n");
    printf("Enter the size of array:");
    scanf("%d",&j);
    printf("Enter the Array:");
    for(i=0;i<j;i++)
    {
        printf("enter elements:");
        scanf("%d",&n[i]);
    }
}
void merge_sort(int n[],int r; int j)
{  
    int i,m;
    for(i=0;i<j;i++)
    {
        for(r=j;r<i;r--)
        {
            if(n[i]<n[r])
            {
                m=floor((n[i]+n[r])/2);
                merge_sort(n[i],n[r],j);
                merge_sort(m+1,n[r],j);

            }
        }
    }
    
}