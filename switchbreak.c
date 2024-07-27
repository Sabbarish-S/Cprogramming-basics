#include <stdio.h>
int main()
{
    char grade;
    
    printf("Enter your Grade:\n");
    scanf("%c",&grade);

    switch (grade)
    {
        case 'S':
            printf("Way to Go....");
            break;
        case 'A':
            printf("You nailed it.");
            break;
        case 'B':
            printf("You did better");
            break;
        case 'C':
            printf("You nailed good.");
            break;
        case 'D':
            printf("You Could try better.");
            break;
        case 'E':
            printf("Atleast not an F -_-");
            break;
        case 'F':
            printf("Sit for an another Semester");
            break;
        default:
            printf("Enter the correct or valid grade");
            break;
    }
    

}