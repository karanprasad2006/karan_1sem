#include <stdio.h>
int main()
{
    int a=99;
    int *ptr=&a;
    printf("value of a=%d \n",a);
    printf("value of a using ptr=%d \n",*ptr);
    printf("value of  ptr=%p \n",ptr);
    printf("values of ptr using a=%p \n",&a);
}