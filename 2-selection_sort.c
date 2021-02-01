#include "sort.h"
/**
 * selection_sort - Sorts an array of integers, in      *
 *                    ascending order.                  *
 *   Arguments:                                         *
 *     @array:    - Pointer to the array of integers.   *
 *      @size:    - Size of the given array             *
 *                                                      *
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
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0, idx = 0;
	int swp;

	if (size > 1)
		for (i = 0; i < size - 1; i++)
		{
			idx = i;

			for (j = i + 1; j < size; j++)
				if (array[j] < array[idx])
					idx = j;

			if (idx != i)
			{
				swp = array[i];
				array[i] = array[idx];
				array[idx] = swp;
				print_array(array, size);
			}
		}
}
