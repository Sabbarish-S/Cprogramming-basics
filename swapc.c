// swapping the variables

#include <stdio.h>
#include <string.h>

int main()
{
    char x[] = "water";
    char y[] = "lemonade";

    char temp[15];

    /*temp = x;
    x=y;
    y=temp;*/

    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);

    printf("\nX=%s\n",x);
    printf("\nY=%s\n",y);
}