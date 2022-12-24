#include<stdio.h>
#include<conio.h>
// Write a C program to find the largest of three numbers.
int main ()
{
    int a,b,c;
    printf("Enter the three number= \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("a is greater");
    if(b>c && b>a)
    printf("b is greater");
    if(c>a && c>b)
    printf("c is greater");

}
