#include "sort.h"
/*  desc: sort an array in ascending order using bubble sort
    algorithm
    return: -
*/

void bubble_sort(int *array, size_t size)
{
    int i, j, temp, flag;
    flag = 0;
    // i rep number of passes
    // j rep number of element to compare in each passes
    // temp is to swap the variables
    // flag is to produce an optimized bubble if the rest of array
    // is sorted
    for (i = 0; i < size + 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
        break;
    }
}
