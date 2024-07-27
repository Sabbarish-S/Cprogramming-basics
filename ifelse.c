#include <stdio.h>
int main()
{
    int age;

    printf("Enter your age : \n");
    scanf("%i",&age);

    if(age >= 18)
    {
        printf("Successfully Verified. You're eligible to Sign up..");
    }
    else if (age < 0)
    {
        printf("You are not born yet...");
    }
    else if (age <= 10)
    {
        printf("You are not eligible to sign up, still your age is in the clock");
    }
    else 
    {
        printf("You are not eligible to sign up");
    }
        
}