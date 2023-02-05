#include <stdio.h>
#include <stdlib.h>
//write a c-program to swap a number without using third variable.

int main()
{
    int a=10,b=20;
    printf("the old value of a=10 and b=20");
    b=b-a; a=a+b;
    printf("\nthe new value of a and b:%d %d",a,b);
    return 0;
}
