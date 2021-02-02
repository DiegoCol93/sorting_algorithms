#include "sort.h"
/**
 * cocktail_sort_list - Sorts a doubly linked list in ascending order.
 *
 *     Arguments:
 *       @list:       - Pointer to the head of the list.
 *
 */
#include <unistd.h>
void cocktail_sort_list(listint_t **list)
{
	listint_t *cmp = NULL, *mov = NULL;
	int swapped = 1;

	if (list)
	{
		cmp = *list;
		while (swapped)
		{
			swapped = 0;
			while (cmp->next)
			{
				if (cmp->n > cmp->next->n)
				{
					mov = cmp->next; /* Start moving */
					mov->prev = cmp->prev;/*  */
					cmp->prev->next = mov;
					cmp->next = mov->next;
					cmp->prev = mov;
					mov->next = cmp;
					if (cmp->next)
						cmp->next->prev = cmp;
					swapped = 1, print_list(*list);
					continue;
				}
				cmp = cmp->next;
			}
			if (!swapped)
				break;
			swapped = 0;
			while (cmp->prev)
			{
				if (cmp->n < cmp->prev->n)
				{
					mov = cmp->prev;
					/* Set ptrs of the next after cmp.*/
					mov->next = cmp->next;
					cmp->next->prev = mov;

					/* Set ptrs before mov. */
					cmp->prev = mov->prev;
					cmp->next = mov;
					mov->prev = cmp;
					if (cmp->prev)
						cmp->prev->next = cmp;
					else
						*list = cmp;
					swapped = 1, print_list(*list);
					continue;
				}
				cmp = cmp->prev;
			}
		}
	}
}
