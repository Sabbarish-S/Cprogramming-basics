#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[25];
    char password[25];
    int id;
    
}User;


int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    User user1 = {"Sabbarish S","dsfghgfd", 7654334567876};
    User user2 = {"Dharsshana S","fddfdsd", 43432332223};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%i\n\n", user1.id);

    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%i\n", user1.id);

    




    return 0;
}