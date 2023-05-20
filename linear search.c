#include<stdio.h>
int main()
{
 int a[5],i,x,n=5;
 printf("enter the elemets= ");
 for(i=1;i<=5;i++)
 {
  scanf("%d",&a[i]);// 5,3,2,9,1-->x=9
 }
 printf("enter the searching elelemsts= ");
 for(i=0;i<=0;i++)
 {
   scanf("%d",&x); // x=2
 }
 for(i=1;i<=5;i++)
 {

 if(a[i]==x)
 {
  printf("searching element is found");
  break;
 }

}
  if(i==6)
 {
  printf("searching element is not found");
 }

 }





