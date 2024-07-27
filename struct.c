#include<stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

int main()
{
    /* struct = collection of related members ("variables")
                they can be of different data types listed
                under one name in a block of memory
                VERY SIMILAR to classes in other languages (but no methods) 
    */

   struct Player player1;
   struct Player player2;

   strcpy(player1.name, "Sabbarish S");
   player1.score= 4;

   strcpy(player2.name, "Manish R");
   player2.score=player1.score;

//    printf("%s\n", player1.name);
//    printf("%i\n", player1.score);

//    printf("%s\n", player2.name);     
//    printf("%i\n", player2.score);

   struct Player players[] = {player1,player2};

    for(int i=0; i <sizeof(players)/sizeof(players[0]);i++ )
    {
        printf("%-12s\n", players[i].name);
        printf("%i\n",players[i].score);
    }

    return 0;
   

}