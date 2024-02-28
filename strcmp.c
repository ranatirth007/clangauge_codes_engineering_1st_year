#include<stdio.h>
#include<string.h>
int main()
{   
    char s[100],t[100];
    int i;
    printf("enter the 1st string:");
    scanf("%s",s);
    printf("enter the sub string to be find:");
    scanf("%s",t);

    i=strcmp(s,t);
    printf("%d",i);
    return 0;
}