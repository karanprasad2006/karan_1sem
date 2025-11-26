#include<stdio.h>
struct employee
{
    int id;
    float salary;
    char name[50];

}emp1;
int main()
{
    printf("detail of employee:\n");
printf("enter the employee id:\n");
scanf("%d",&emp1.id);
printf("enter the employee salary:\n");
scanf("%f",&emp1.salary);
printf("enter the employee name:\n");
scanf("%s",emp1.name);
}