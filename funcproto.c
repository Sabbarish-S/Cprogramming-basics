#include <stdio.h>

void hbd(char[],int);

int main()
{
    char x[] = "Sabbarish S";
    int age = 21;

    hbd(x,age);

}

void hbd(char name[], int age)
{
    printf("\nHello %s\n",name);
    printf("You are %i years old",age);
}
