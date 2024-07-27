#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int age;

    printf("Type your name\v");
    
    fgets(name,50,stdin);  //To get every letters even after the SPACE.......
    name[strlen(name)-1] = '\0';  //to remove the whitespace
    //scanf("%s",name);
    
    printf("How Old are you??\n");

    scanf("%i",&age);

    printf("Hello %s",name);
    printf("\tYou are %i old",age);
}