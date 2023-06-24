#include "sort.h"
/**
 * bubble_sort - sort an array in ascending order using bubble sort
 *
 * @array: the array to be sorted
 * @size: the size of array
 * return: -
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, temp, a, flag;

	if (array == NULL || size < 2)
	return;
	
	for (i = 0; i < size; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
			if (flag == 0)
			break;
		}
	}
}
