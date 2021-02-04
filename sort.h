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

/* 3.0 quick__sort - Recursive auxiliary function for quick_sort. - - - - - -*/
void quick__sort(int *array, size_t size, size_t tot_size, int *saved);

/* 3.1 partition - Sorts array and divides based on the last index's value - */
size_t partition(int *array, size_t low, size_t hig, int *ptr, size_t size);

/* 100. shell_sort - Sorts an array of integers in ascending order. - - - - -*/
void shell_sort(int *array, size_t size);

/* 101. cocktail_sort_list - Sorts a doubly linked list in ascending order.  */
void cocktail_sort_list(listint_t **list);

/* 101.0 swp_fwd - Swaps forward two nodes of a linked list. - - - - - - - - */
int swp_fwd(listint_t *current, listint_t **list);

/* 101.1 swp_bck - Swaps backward two nodes of a linked list. - - - - - - - -*/
int swp_bck(listint_t *current, listint_t **list);

/* 102 counting_sort - Sorts an array in ascending order. - - - - - - - - - -*/
void counting_sort(int *array, size_t size);

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */
/*                           Merge sort functions                            */
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

/* 103 merge_sort - Sorts an array of integers in ascending order. - - - - - */
void merge_sort(int *array, size_t size);
void merge(int *array, size_t size);
void top_down_split(int *cpy, size_t idx_b, size_t idx_e, int *array);
void top_down_merge(int *cpy, size_t idx_b, size_t idx_mid, size_t idx_e,
		    int *array);
void cpy_array(int *array, size_t idx_b, size_t idx_e, int *cpy);




#endif /* __FILE___H_ end if file header. */
