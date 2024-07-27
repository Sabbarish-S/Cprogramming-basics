#include <stdio.h>

int main()
{

    //2D array = an array, where each element is an entire array
    //           useful if you need a matrix, grid, or table of data

    /*int numbers[2][3] = { //TWO rows , THREE columns
                            {1, 2, 3},
                            {3, 4, 5}
                        };

    return 0;
    */
//------------------------------------------------------
    /*int numbers[2][2];
    
    numbers[0][0] = 1;
    numbers[0][1] = 3;
    numbers[0][2] = 2;
    numbers[1][0] = 8;
    numbers[1][1] = 5;
    numbers[1][2] = 9;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++ )
        {
            printf ("%d ", numbers[i][j]);
        }
        printf("\n");
    }*/
//--------------------------------------------------------------------

    int numbers[3][3];

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("rows : %d\n", rows);
    printf("columns : %d\n",columns);

    numbers[0][0] = 1;
    numbers[0][1] = 3;
    numbers[0][2] = 2;
    numbers[1][0] = 8;
    numbers[1][1] = 5;
    numbers[1][2] = 9;
    numbers[2][0] = 0;
    numbers[2][1] = 7;
    numbers[2][2] = 5;


    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++ )
        {
            printf ("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    
}