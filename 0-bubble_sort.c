#include "sort.h"
/**
 * bubble_sort     -     Sorts an array of integers     *
 *                         in ascending order.          *
 *  Arguments:                                          *
 *    @array:      -     Array of integers.             *
 *     @size:      -     Size of the given array.       *
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
void bubble_sort(int *array, size_t size)
{
	unsigned int i, swapped = 1;
	int tmp;

	while (swapped)
	{
		swapped = 0;
		for (i = 1; i < size; i++)

			if (array[i - 1] > array[i])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				swapped = 1;
			}
	}
}
