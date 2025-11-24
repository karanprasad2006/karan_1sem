#include<stdio.h>
int main()
{
    int n,i, a=0,b=1,c;
    printf("enter a no:");
    scanf("%d",&n);
     printf("the pallandrome is=");
     for( i=2;i<n;i++)
     {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        
     }
}