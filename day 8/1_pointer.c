#include<stdio.h>
int main()
{
    int a=29;
    int *ptr=&a;
    printf("value of a=%d \n",a);
    printf("address of a=%p \n",&a);
    printf("value of ptr=%p \n",ptr);
    printf("address of ptr=%p \n",&ptr);
    printf("value at the address stored in ptr=%d \n",*ptr);
}