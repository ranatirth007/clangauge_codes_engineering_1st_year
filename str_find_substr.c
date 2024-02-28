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

    for(i=1;i<=strlen(t);i++)
    {
        if(t[i]==s[i])
        {
            printf("%s",s[i]);
        }
        else{
            printf("search not found!!\n");
        }
    }
    return 0;
}