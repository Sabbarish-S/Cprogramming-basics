// the program is to perform the operations between two numbers
// NUM 1 and NUM2 are taken as the input for the operations

#include <stdio.h>
#include<math.h>

int main()
{
    double num1;
    double num2;
    char operator;
    double answer;

    printf("Enter the operator to perform the opeation (+ - * /): \n");
    scanf("%c",&operator);

    printf("Enter number 1 :\n");
    scanf("%lf",&num1);

    printf("\nEnter the number 2: \n");
    scanf("%lf",&num2);

    switch (operator)
    {
    
    case '+':
        answer = roundl(num1 + num2);
        printf ("%lf + %lf is %.2f",num1,num2,answer);
        break;
    
    case '-':
        answer = num1 - num2;
        printf ("%lf - %lf is %.2f",num1,num2,answer);
        break;

    case '*':
        answer = num1 * num2;
        printf ("%lf * %lf is %.2f",num1,num2,answer);
        break;

    case '/':
        answer = num1 / num2;
        printf ("%lf / %lf is %.2f",num1,num2,answer);
        break;

    default:
        printf("Please enter a valid operator");
        break;
    }
}