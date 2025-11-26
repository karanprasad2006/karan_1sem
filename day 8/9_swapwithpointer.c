#include<stdio.h>
int main()
{

    int a=10, b=20;
    int *ptr1=&a;
    int *ptr2=&b;
    int temp;
    printf("before swapping: a=%d, b=%d\n", a, b);
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("after swapping: a=%d, b=%d\n", a, b);
}