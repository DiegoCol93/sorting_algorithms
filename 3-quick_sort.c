#include "sort.h"
/**
 * quick_sort - Sorts an array of integers, in          *
 *               ascending order.                       *
 *                                                      *
 *  Arguments:                                          *
 *    @array:  - Pointer to array of ints.              *
 *     @size:  - Size of the array of integers.         *
 *       _____   __  ______  ______  ______             *
 *      /\  __-./\ \/\  ___\/\  ___\/\  __ \            *
 *      \ \ \/\ \ \ \ \  __\\ \ \__ \ \ \/\ \           *
 *       \ \____-\ \_\ \_____\ \_____\ \_____\          *
 *        \/____/ \/_/\/_____/\/_____/\/_____/          *
 *       __      ______  ______  ______  ______         *
 *      /\ \    /\  __ \/\  == \/\  ___\/\___  \        *
 *      \ \ \___\ \ \/\ \ \  _-/\ \  __\\/_/  /__       *
 *       \ \_____\ \_____\ \_\   \ \_____\/\_____\      *
 *        \/_____/\/_____/\/_/    \/_____/\/_____/      *
 *                                                      *
 *                      Jan-2021                        *
 */
void quick_sort(int *array, size_t size)
{
	quick__sort(array, size, size, array);
}
/**
 * quick__sort - Auxiliary function for recursion in
 *                quick_sort.
 *
 *  Arguments:
 *   @array:   - Pointer to array of integers.
 *    @size:   - Size of the array.
 *  @tot_size: - Total size of the array.
 *   @saved:   - Pointer saving the address of the
 *                 beggining of the array.
 *
 */
void quick__sort(int *array, size_t size, size_t tot_size, int *saved)
{
	unsigned int pivot = 0;

	if (size > 1)
	{
		pivot = partition(array, pivot, size - 1, saved, tot_size);
		if (pivot)
			quick__sort(array, pivot++, tot_size, saved);
		quick__sort(array + pivot, size - pivot, tot_size, saved);
	}
}
/**
 * partition  - Function to divide the array and return a pivot,
 *                the left side of the array from pivot is less
 *                than the pivot, the same for the right side
 *                after the pivot.
 *  Arguments:
 *   @array:  - Pointer to current array to divide.
 *    @low:   - Index for the low limit of the array.
 *    @hig:   - Index for the high limit of the array.
 *    @ptr:   - Pointer to the start of the array.
 *    @size:  - Size of the array to print.
 *
 *   Return:  - Index of the new pivot.
 */
size_t partition(int *array, size_t low, size_t hig, int *ptr, size_t size)
{
	int swp = 0, pivot = array[hig];
	size_t i = low, j = low;

	for (j = low; j <= hig; j++)
		if (array[j] < pivot)
		{
			if (array[j] != array[i])
			{
				swp = array[j];
				array[j] = array[i];
				array[i] = swp;
				print_array(ptr, size);
			}
			i++;
		}
	if (array[i] != array[hig])
	{
		swp = array[hig];
		array[hig] = array[i];
		array[i] = swp;
		print_array(ptr, size);
	}
	return (i);
}
