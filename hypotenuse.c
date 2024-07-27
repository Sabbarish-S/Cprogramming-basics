//Hypotenuse calculator program
#include <stdio.h>
#include <math.h>

int main()
{
    double A;
    double B;
    double C;

    printf("Enter the value of A :\n");
    scanf("%lf",&A);

    printf("Enter the value of B :\n");
    scanf("%lf",&B);

    C = sqrt(pow(A, 2)+pow(B, 2));

    printf("The Hypotenuse of the Triangle : %lf \n",C);

    return 0;

}