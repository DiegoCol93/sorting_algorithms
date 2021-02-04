#include "sort.h"
/**
 * counting_sort - Sorts an array in ascending order
 *
 *   Arguments:
 *     @array:   - Pointer to the given array of integers.
 *      @size:   - Size of the array.
 *                                                      *
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
void counting_sort(int *array, size_t size)
{
	int max, position, *count = NULL, *sorted = NULL;
	size_t i;

	if (!size || !array)
		return;
	/* Find the maximun value in the array. */
	max = array[0];
	for (i = 0; i < size; i++)
		if (array[i] > max)
			max = array[i];
	/* Allocate memory for counting arrray. */
	count = malloc(sizeof(int) * (max + 1));
	for (i = 0; i <= (size_t)max; i++)
		count[i] = 0;
	/* Save the counter values of every number in the count array. */
	for (i = 0; i < size; i++)
		count[array[i]] = count[array[i]] + 1;
	/* Sum values in the counting array. */
	for (i = 1; i <= (size_t)max; i++)
		count[i] = count[i] + count[i - 1];
	print_array(count, (size_t)max + 1);
	/* Allocate memory for the new sorted array. */
	sorted = malloc(sizeof(int) * size);
	for (i = 0; i < size; i++)
	{
		count[array[i]] = count[array[i]] - 1;
		position = count[array[i]];
		sorted[position] = array[i];
	}
	/* Write the sorted array bak to the original. */
	for (i = 0; i < size; i++)
		array[i] = sorted[i];
	free(count);
	free(sorted);
}
