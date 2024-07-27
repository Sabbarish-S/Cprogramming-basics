#include <stdio.h>

void sort(int array[], int size)
{
    for (int i = 0; i <size-1; i++)
    {
        for (int j = 0; j < size-i-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}

void printArray(int array[],int size)
{
    for (int i = 0; i<size-1; i++)
    {
        printf("%d\t", array[i]);
    }
}


int main()
{
    int array[] = {74,67,5,3,3,2,44,100};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);
    printArray(array,size);

    return 0;
}