#include<stdio.h>
int main()
{


       int mark[5];
       printf(" enter a no=");
       for( int i=0;i<5;i++)
       {
        scanf("%d",&mark[i]);

       }
       printf("array elemnent");
       for( int i=0;i<5;i++)
{
    printf(" %d value is= %d \n",i+1,mark[i]);
}


}

