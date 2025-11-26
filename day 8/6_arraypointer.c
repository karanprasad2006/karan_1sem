#include<stdio.h>
int main()
    {
         int arr[5]={10,20,30,40,50};
           int *ptr=&(arr[0]);
           printf("value of ptr=%d \n",ptr);
           printf("value of ptr using arr=%d \n",&arr[0]);
           printf("value of  arr=%d \n",arr[0]);
           printf("value of  arr usinf ptr=%d \n",*ptr);
    }
