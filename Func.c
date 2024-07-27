#include <stdio.h>
#include <string.h>

void bday(char x[], int y)
{
    printf("\nHappy birthday %s\n",x);
    printf("You are %i years old\n",y);
}
int main()
{
    char name[100];
    int age;

    printf("Enter your name\n");
    // scanf("%s",&name)S;

    fgets(name,50,stdin);
    name[strlen(name)-1]='\0';

    printf("Enter your age\n");
    scanf("%i",&age);

    bday(name,age);


}