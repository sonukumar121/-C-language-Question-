#include<stdio.h>
int main()
{
    int a[6],sum=0,i;
    printf("Enter array element is= ");
    for(i=0;i<=6;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("the sum of array element is= ");

    for(i=0;i<=6;i++)
    {

      sum=sum+a[i];
    }
    printf("%d",sum);


}











