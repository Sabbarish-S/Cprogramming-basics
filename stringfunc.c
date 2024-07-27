#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Sabbarish";
    char string2[] = "Sathyanarayanan";

    //strlwr(string1);                //converts a string to lowercase
    //strupr(string1);                // converts a string to uppercase
    //strcat(string1,string2);        // appends string2 to end of string1
    //strncat(string1,string2,3);     //appends n characters from string2 to string1
    // strcpy(string1,string2);       //copy string2 to string1
    // strncpy(string1,string2,3);    //copy n characters of string2 to string1

    // strset(string1, '?');           //aets all characters of a string to a given character
    // strnset(string1, 'x', 5);       //sets first n characters of a string to a given character
    // strrev(string1);                //reverse a string

    //printf("%s", string1);
    
    //PART TWO - these result noly true or false / the output is in the integer format
    
    int result = strlen(string1);
    printf("%d",result);
    //int result = strcmp(string1,string2); //string compare all characters
    
    

    
}