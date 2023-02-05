#include <stdio.h>
#include <stdlib.h>
//write a c program to reverse of three digit number.

int main()
{
   int rev,x;
   printf("Enter the number");
   scanf("%d",&x);//321
   rev=x%10*10+x/10;
   printf("rev=%d",rev);
}
