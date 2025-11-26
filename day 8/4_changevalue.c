#include<stdio.h>
int main()
{
    int a=50;
    int *ptr=&a;
    printf("Before changing value of a using pointer: \n");
    printf("value of a=%d \n",a);
    printf("after changing value of a using pointer: \n");
    *ptr=50;
    printf("value of a=%d \n",*ptr);
    (*ptr)++;
    printf("the value of a after 100 is=%d \n",a);

}