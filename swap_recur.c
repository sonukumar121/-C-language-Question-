#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two number= ");
    scanf("%d%d",&a,&b);
    swap(a,b); //function calling.

}
 int swap(int a,int b) // function defination.
 {
     int c;
     c=a;
     a=b;
     b=c;
     printf("%d %d the value of a and b is: "  ,a,b);


 }
