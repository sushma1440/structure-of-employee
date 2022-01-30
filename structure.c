#include<stdio.h>


struct employees
{
    int Empno;
    char Empname[100], Date_of_joining[20], Department[100];
    float Salary;
};

main()
{   
    int i;
    struct employees e1[10];
    for(i=0;i<10;i++)
    {
        printf("\nEnter details of employee %d=",i+1);
        printf("\nEmployee number=");
        scanf("%d",&e1[i].Empno);
        printf("\nEmployee name=");
        scanf("%s",e1[i].Empname);
        printf("\nDate of joining=");
        scanf("%s",e1[i].Date_of_joining);
        printf("\nDepartment=");
        scanf("%s",e1[i].Department);
        printf("\nSalary=");
        scanf("%f",&e1[i].Salary);
    }
   
    for(i=0;i<10;i++)
    {
        printf("\n\nDetails of employee %d=",i+1);
        printf("\n\tEmployee number=%d",e1[i].Empno);
        printf("\n\tEmployee name=%s",e1[i].Empname);
        printf("\n\tDate of joining=%s",e1[i].Date_of_joining);
        printf("\n\tDepartment=%s",e1[i].Department);
        printf("\n\tSalary=%.2f",e1[i].Salary);
    }
   
}
