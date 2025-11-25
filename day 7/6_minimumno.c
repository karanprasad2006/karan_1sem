#include<stdio.h>
int main(void)
{
    int min, arr[5];
    int i;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
         if (scanf("%d",&arr[i]) != 1) {
             fprintf(stderr, "Invalid input\n");
             return 1;
         }

    }
    min = arr[0];
    
    for(i=1;i<5;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Minimum value = %d\n",min);

    return 0;
}