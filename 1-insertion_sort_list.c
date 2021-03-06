#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list of integers in...
* ...ascending order using the insertion sort algorithm
*
* @list: linked list to be sorted
*
* Return: void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next; /* set 'current' to the 2nd node of list */

	for (; current != NULL; current = current->next)
	{ /* ^ while 'current' exists, traverse through 'current' */
		while (current->prev != NULL && current->n < current->prev->n)
		{ /*
			* traversing/moving left as long as it is not already at the head..
			* ..of the list & the value at the position is greater than the..
			* ..previous value
			*/
			current->prev->next = current->next;

			if (current->next != NULL) /* checking if at tail/end of list */
				current->next->prev = current->prev;

			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;

			if (current->prev == NULL)
				*list = current;
			else
				current->prev->next = current;
				print_list(*list);
		}
	}
}
