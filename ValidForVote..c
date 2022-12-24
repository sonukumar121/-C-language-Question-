#include<stdio.h>
int main()
//write a c program to check valid for vote or not.
{
  int age;
  printf("Enter your age= ");
  scanf("%d",&age);
  if(age>=18)
  {
      printf("valid for vote");
  }
  else
   printf("not valid for vote");
}
