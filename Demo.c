#include <stdio.h>
#include <math.h>
int main(){

    // single line comment

    /* Escape Sequences : 

            \n = newline
            \t = tab  
            \v = vertical tab
            \f = formfeed page break
            \a = alert 
            \b = backspace  
    
    */ 

    printf(" \bVanakkam \vDa\vMaapla\n");

    int  i;
    i = 124;
    int a = 2313;

    int age = 23;
    float gpa = 9.2;
    char grade = 'S';
    char name[] = "Sabbarish";

    printf("Hello I am %s\n", name);
    printf("My GPA is %.1f\n",gpa);
    printf("My grade = %c\n",grade);
    printf("and my age is %i\n",age);

    /*const float pi = 3.12456543;
    pi = 123.44; Gives a error because it becomes "read only file"
    printf("The pi value is : %f",pi);*/ 

    float x = 1054.3;
    int y = 10;

    float z = fmod(x,(float) y); //float-modulo

    printf("the final answer is : %.2f",z);

      


     
}