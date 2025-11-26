#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    char name[50];
    float marks;
}st1 , st2;
int main()
{
strcpy(st1.name,"karan");
st1.id=101;
st1.marks=85.5;
printf("\n detail of student 1:\n");
printf("name=%s\n",st1.name);
printf("id =%d \n",st1.id);
printf("marks=%f \n",st1.marks);





strcpy(st2.name,"kajal");
st2.id=102;
st2.marks=85;
printf(" \n detail of student 2:\n");
printf("name=%s\n",st2.name);
printf("id =%d \n",st2.id);
printf("marks=%f \n",st2.marks);
}






