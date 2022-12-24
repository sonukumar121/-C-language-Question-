#include<stdio.h>
#include<conio.h>
//write a c program to find result of student.
    int main()
{
    int Eng,Math,Chem,phy,Hindi,per;
    per=Eng+Math+Chem+phy+Hindi/5*100;

    printf("Enter your marks of Eng= ");
    scanf("%d",&Eng);

    printf("Enter your marks of Math= ");
    scanf("%d",&Math);

    printf("Enter your marks of Chem= ");
    scanf("%d",&Chem);

    printf("Enter your marks of phy= ");
    scanf("%d",&phy);

    printf("Enter your marks of Hindi= ");
    scanf("%d",&Hindi);

    if(per>=60)
    {
    printf("First Div");

    }

   else if(per>=50)
    {
    printf("Second Div");

    }

   else if(per>=40)
    {
    printf("Third Div");

    }

    else
    {
    printf("Fail");

    }




}
