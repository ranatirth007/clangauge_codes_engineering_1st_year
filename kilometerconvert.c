#include<stdio.h>
int main()
{
    int a,b,c,e;
    float d;
    printf("Enter the distance in kilometer:");
    scanf("%d",&a);
    b=a*3280.8399;
    c=a*100000;
    d=a*39370.07874;
    e=a*1000;
    printf("%d Kilometers = %d feets\n",a,b);
    printf("%d Kilometers = %d centimeters\n",a,c);
    printf("%d Kilometers = %finches\n",a,d);
    printf("%d Kilometers = %d Meters\n",a,e);
    printf("\n");
    return 0;
}