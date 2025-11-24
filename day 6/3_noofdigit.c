#include<stdio.h>
int main()
{
    int num;
    printf(" enter a no=");
    scanf("%d",&num);
    int count=0;
    while(num!=0)
    {
        int digit=num%10;
        count++;
        num=num/10;
    } printf("no of digit is : %d \n",count);
    
    
}