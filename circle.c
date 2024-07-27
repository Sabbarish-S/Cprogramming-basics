//Circumference = 2 * pi * radius
// Area = pi * (radius)^2

#include <stdio.h>
#include <math.h>

int main()
{
    const double pi = 3.14598;
    double radius ;
    double circumference;
    double area;

    printf("Enter the radius:\n");
    scanf("%lf",&radius);

    circumference = 2 * pi * radius;
    area = pi * pow(radius,2);

    printf("The circumference of the circle : %lf \n",circumference);
    printf("The area of the circle : %lf \n",area); 
}
