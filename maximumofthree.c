#include<stdio.h>
int main()
{
    int a,b,c;
printf("enter 1st number:");
scanf("%d",&a);
printf("enter 2nd number:");
scanf("%d",&b)
;printf("enter 3rd number:");
scanf("%d",&c);

if(a>b)
{
    if(a>c)
    {
        printf("%d is greatest from %d, %d, %d",a,a,b,c);
    }
    else
    {
        printf("%d is greatest from %d, %d, %d",b,a,b,c );
    }
}
else
{
if(b>c)
printf("%d is greatest from %d, %d, %d",b,a,b,c);
else
printf("%d is greatest from %d, %d, %d",c,a,b,c);

}

}