#include<stdio.h>
#include<conio.h>
//Write a c program without using third variable.
int main()
{
  int x,y;
  printf("Enter the value of x= ");
  scanf("%d",&x);
  printf("Enter the value of y= ");
  scanf("%d",&y);
  x=x+y;
  y=x+y;
  printf("sum = %d");
  getch();
  return 0;


}
