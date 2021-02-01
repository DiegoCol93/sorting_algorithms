#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order. *
 *                                                                      *
 *      Arguments:                                                      *
 *        @list:       - Pointer to head of the doubly linked list.     *
 *                                                                      *
 *                _____   __  ______  ______  ______                    *
 *               /\  __-./\ \/\  ___\/\  ___\/\  __ \                   *
 *               \ \ \/\ \ \ \ \  __\\ \ \__ \ \ \/\ \                  *
 *                \ \____-\ \_\ \_____\ \_____\ \_____\                 *
 *                 \/____/ \/_/\/_____/\/_____/\/_____/                 *
 *                __      ______  ______  ______  ______                *
 *               /\ \    /\  __ \/\  == \/\  ___\/\___  \               *
 *               \ \ \___\ \ \/\ \ \  _-/\ \  __\\/_/  /__              *
 *                \ \_____\ \_____\ \_\   \ \_____\/\_____\             *
 *                 \/_____/\/_____/\/_/    \/_____/\/_____/             *
 *                                                                      *
 *                               Jan-2021                               *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *previous = NULL, *saved = NULL;

	if (list)
	{
		previous = *list;
		current = previous->next;
		while (current)
		{
			saved = previous;
			if (current->n < previous->n)
			{
				saved = previous;
				while (previous && previous->n > current->n)
				{
					/* Set pointers for node after current. */
					previous->next = current->next;
					if (current->next)
						current->next->prev = previous;
					previous = previous->prev; /* Move previous <-*/
					if (previous) /* Set pointers accordingly. */
					{
						current->next = previous->next;
						previous->next = current;
						current->prev = previous;
					}
					else /* No previous so set the head. */
					{
						current->next = *list;
						current->prev = NULL;
						*list = current;
					}
					if (current->next)
						current->next->prev = current;
					print_list(*list);/* Print the list. */
				}
				current = saved, previous = current->prev;
			}
			current = current->next, previous = previous->next;
		}
	}
}
