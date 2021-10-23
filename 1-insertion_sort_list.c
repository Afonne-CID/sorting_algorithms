#include <stdlib.h>
#include <stddef.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *        in ascending order using the insertion sort
 *@list: A double pointer to a doubly-linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev_tmp, *tmp;

	if (!list || !(*list) || (*list)->next == NULL)
		return;

	while ((*list)->next)
	{
		tmp = (*list)->next;
		prev_tmp = tmp->prev;
		while (prev_tmp->prev && (prev_tmp->n > tmp->n))
		{
			tmp->next = prev_tmp;
			prev_tmp->prev = tmp;
			
			tmp->prev = prev_tmp->prev;
			prev_tmp->next = tmp->next;
	
			tmp->next->prev = prev_tmp;
			prev_tmp->prev->next = tmp;
		
			print_list((const listint_t *)*list);

			tmp = prev_tmp;
			prev_tmp = prev_tmp->prev;
		}

		*list = (*list)->next;
	}
}
