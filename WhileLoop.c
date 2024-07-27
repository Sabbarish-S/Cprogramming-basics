// while loop  =repeats a section of code possibly unlimited times.
// WHILE some conditions remains true
// a while loop might not execute at all

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[50];
    char s;

    printf("\nMay I know your Name? Y / N\n");
    scanf(" %c",&s);

    s = toupper(s);

    if(s == 'Y')
    {
        printf("\nPlease tell me your name..\n");
        getchar();
        fgets(name,25,stdin);
        name[strlen(name)-1] = '\0';

        while(strlen(name) == 0)
        {
            printf("\nYou didn't say your name\n");
            printf("\nPlease tell me your name..\n");
            fgets(name,25,stdin);
            name[strlen(name)-1] = '\0';

            
        }

        printf ("\nWow %s , a good name for a good looking...\n",name);

    }
    else
    {
        printf("Shit... My efforts are WASTED");

    }

    


}

