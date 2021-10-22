#include <stddef.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *       using Bublle sort.
 *@array: The array to sort
 @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i = 0, j = 0;
	
	for (i = 0; i < size; i++)	
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] > array[j+1])
			{
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
				print_array(array, size);
			}
		}
	}
}
