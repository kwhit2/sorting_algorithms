#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order...
* ...using the selection sort algorithm
* @array: array to be sorted
* @size: size of array
*
* Return: void
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		/* ^ finds minimum value in the array on first run through */
		/* next run thru, we just need to search for min in array[1...end] */
		/* this process continues until all ints of array have been sorted */
		{
			if (array[j] < array[min])
				min = j; /* after the for loop, min = min value of array */
		}
		if (i != min) /*if min is not 1st position in array, swap until it is*/
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
