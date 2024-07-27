/*  Celcius -> Farenheit
        F=(C*9/5)+32
    Farenheit -> Celcius
        C=((F-32)*5)/9
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("Enter the Unit for the conversion (C) or (F)\n");
    scanf("%c",&unit);
    
    unit = toupper(unit);

    if (unit == 'C'){
        printf("\nEnter the temperature that you want to convert to farenheit\n");
        scanf("%f",&temp);

        temp = (temp *9/5)+32;

        printf("\nThe Temperature in farenheit is : '%.1f'",temp);
    }

    else if (unit == 'F')
    {
        printf("\nEnter the temperature that you want to convert to celcius\n");
        scanf("%f",&temp);

        temp = ((temp-32)*5)/9;

        printf("\nThe temperature in Celcius is : '%.1f'",temp);
    }
    else
    {
        printf("The unit %c is an invalid unit of measurement",unit);
    }

    return 0;
    

}