#include<stdio.h>
int main()
{ int b=49;
     int *ptr1=&b;
   int  **ptr2=&ptr1;
   int ***ptr3=&ptr2;
   printf("value of b using b=%d \n",b);
   printf("value of b using ptr1=%d \n",*ptr1);
   printf("value of b using ptr2=%d \n",**ptr2);
   printf("value of b using ptr3=%d \n",***ptr3);
   printf("value of b using ptr3=%d \n",*(*(*(*(&ptr3)))));



}