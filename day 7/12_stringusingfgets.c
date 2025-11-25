#include<stdio.h>
int main()
{
    char input[100];
    printf("enter a string=");
    fgets(input,100,stdin);
    printf("string is =%s \n",input);
    printf("size of string=%d \n",sizeof(input));
    printf("length of string=%d \n",sizeof(input)/sizeof(input[0]));


}

