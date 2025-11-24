#include<stdio.h>
int main()
{
    int num, fact=1;
    printf("enter a number=");
    scanf("%d",&num);
    while(num>=1)
    {
        fact=fact*num;
        num--;
    }printf("factorial of numnber=%d \n",fact);

}