#include<stdio.h>
struct employe
   {
      int emp_id;
      char emp_name[20];
      char emp_designation[10];
      int emp_salary;
      char emp_department[5];
   };
int main()
{
   
  struct employe e1,e2,e3;



 printf("enter employee name:");
 scanf("%s",e1.emp_name);
 printf("enter employee designation:");
 scanf("%s",e1.emp_designation);
 
 printf("enter employee department:");
 scanf("%s",e1.emp_department);
  printf("enter employee id:");
 scanf("%d",&e1.emp_id);
 printf(" enter employee salary:");
 scanf("%d",&e1.emp_salary);


printf("name is %s",e1.emp_name);
printf("des is %s",e1.emp_designation);
printf("des is %s",e1.emp_department);
 printf("id is %d\n",e1.emp_id);
 
 printf("salary= %d",e1.emp_salary);
 return 0;

}