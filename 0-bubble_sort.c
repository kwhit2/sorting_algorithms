#include "sort.h"

/**
* bubble_sort - sorts an array of integers in ascending order...
* ...using the bubble sort algorithm
*
* @array: array to be sorted
* @size: size of array
*
* Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, swap;

	if (array == NULL)
		return;

	for (i = 0 ; i < size - 1; i++) /* traverse all elements of array */
	{
		for (j = 0 ; j < size - i - 1; j++)
		{ /* size - i - 1 as we want to get to 1 before the end of array */
		/* as index [i + 1] needs to exist & not be = NULL for comparison */
			if (array[j] > array[j + 1])
			{ /* compare values starting with index 0 & index 1 */
				swap = array[j]; /* following 3 lines swap the values */
				array[j]   = array[j + 1];
				array[j + 1] = swap;
				print_array(array, size);
			}
		}
	}
}
