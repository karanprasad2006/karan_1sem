#include<stdio.h>
int main()
{
    int a;

    printf("enter a no=");
    scanf("%d",&a);
    
    if(a>=90)
    {
    printf("its a first grade");
}else if(a>=80)
{
    printf("its a second grade");

}else if(a>=50)
{
    printf("its a third grade");
}else 
{
printf("its fail");
}
}