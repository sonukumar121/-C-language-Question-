
#include<stdio.h>
//write a c program to reverse of 3 number;
int main()
{
   int n,r;
   printf("Enter the value of n= ");
   scanf("%d",&n);
   while(n>0)
   {
    r=n%10;
    n=n/10;
    printf("%d",r);
   }
   getch();
   return 0;
}


