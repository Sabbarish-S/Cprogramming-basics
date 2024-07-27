#include<stdio.h>
#include<string.h>


/* you can't directly change the value in the index of an array
TO DO change the value you need STRCPY */
int main()
{
    char cars[][10]= {"Maruti", "Mahindra", "DC Putra"};
    //cars[10] = "TATA"; wont work
    strcpy(cars[0],"TATA");

    //To Display
    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

     

}

