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

	for (i = 0; i < size + 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
		if (array[j] > array[j + 1])
		{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			print_array(array, size);
			flag = 1;
		}
	}
	if (flag == 0)
	{
	break;
	}
	}
}
