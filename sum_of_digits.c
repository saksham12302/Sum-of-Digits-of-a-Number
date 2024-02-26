#include <stdio.h>
  int main()
    {
     int n,x,rem,sum=0;
     printf("Enter a Number \n");
     scanf("%d",&n);
     x=n;
     while(n>0)
     {
         rem=(n%10);
         sum=sum+rem;
         n=n/10;
     }
     printf("The Sum of the digts of %d number is :  \n%d",x ,sum);
     return 0;
    }