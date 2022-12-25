//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<stdio.h>
int main()
{
   int x,y,z;
   printf("Enter the value of x= ");
   scanf("%d",&x);
   printf("Enter the value of y= ");
   scanf("%d",&y);
   printf("Enter the value of z= ");
   scanf("%d",&z);
   if(x==y && y==z)
   {
    printf("Equilateral Triangle");
   }
   else if (x==y ||  x==z || y==z )
   {
   printf("Isosceles Triangle");
   }
   else
   printf("Scalene Triangle");
   getch();
   return 0;

}
