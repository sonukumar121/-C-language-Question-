// Write a C program to check whether an alphabet is a vowel or consonant.
#include<stdio.h>
int main()
{
    int alp;
    printf("Enter any alp\n");
    scanf("%c",&alp);
    if(alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u')
    {
    printf("vowel");
    }
    else
    {
    printf("consonant");

    }
    getch();
    return 0;
}
