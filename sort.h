#ifndef __FILE___H_
#define __FILE___H_
#include <stdio.h>
#include <stdlib.h>
/*---------------------------------------------------------------------------*/
/*                            Given Structures.                              */
/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/


/*Structure for a doubly linked list. - - - - - - - - - - - - - - - - - - - -*/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*---------------------------------------------------------------------------*/
/*                         Given Function prototypes.                        */
/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

/* 0.0 print_array - Prints an array of integers - - - - - - - - - - - - - - */
void print_array(const int *array, size_t size);

/* 0.1 print_list - Prints a list of integers - - - - - - - - - - - - - - - -*/
void print_list(const listint_t *list);

/*---------------------------------------------------------------------------*/
/*                           Function prototypes.                            */
/*- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

/* 0. bubble_sort  - Sorts an array of integers in ascending order. - - - - -*/
void bubble_sort(int *array, size_t size);

/* 1. insertion_sort_list - Sorts a doubly linked list in ascending order. - */
void insertion_sort_list(listint_t **list);

/* 2. selection_sort - Sorts an array of integers in ascending order. - - - -*/
void selection_sort(int *array, size_t size);

/* 3. quick_sort - Sorts an array of integers in ascending order. - - - - - -*/
void quick_sort(int *array, size_t size);

/* 3.1 partition - Sorts array and divides based on the last index's value - */
unsigned int partition(int *array, unsigned int low, unsigned int hig);


#endif /* __FILE___H_ end if file header. */
