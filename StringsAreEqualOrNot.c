#include<stdio.h>
#include<conio.h>
// strings are equal or not;
int main()
{
   char str1[]= "x"; char str2[]=" y";
   printf("Enter the x string= ");
   scanf("%s",&str1);
   printf("Enter the y string= ");
   scanf("%s",&str2);

   if(strcmp(str1,str2)==0)
   {
    printf("strings are equal\n");
   }
   else
   {
       printf("strings are not equal\n");
   }
   getch();
   return 0;

}

