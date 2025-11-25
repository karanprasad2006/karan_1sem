
#include<stdio.h>
int main()
{


       int even[100];
       printf(" enter a no=");
    
       for( int i=0;i<100;i++)
       {
      
        scanf("%d",&even[i]);

       }
       printf("even elemnent");
       for( int i=0;i<100;i++)
       {
       if(even[i]%2==0)
{
    printf("%d value is=%d \n",i+1,even[i]);
}
  }

}

