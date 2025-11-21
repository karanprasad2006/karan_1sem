#include<stdio.h>
int main()
{
    int ch;
    printf("enter a character=");
    scanf("%c",ch);
    if(ch>=65 && ch<=90)
    {
        printf("its a capital character!!");

    }else
    {
        printf("its a lower!!");
    }
}