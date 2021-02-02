#include "sort.h"
/**
 * shell_sort    - Sorts an array of integers in ascending order.   *
 *                                                                  *
 *    Arguments:                                                    *
 *      @array:  - Pointer to the array of integers.                *
 *       @size:  - Size of the given array.                         *
 *                                                                  *
 *              _____   __  ______  ______  ______                  *
 *             /\  __-./\ \/\  ___\/\  ___\/\  __ \                 *
 *             \ \ \/\ \ \ \ \  __\\ \ \__ \ \ \/\ \                *
 *              \ \____-\ \_\ \_____\ \_____\ \_____\               *
 *               \/____/ \/_/\/_____/\/_____/\/_____/               *
 *              __      ______  ______  ______  ______              *
 *             /\ \    /\  __ \/\  == \/\  ___\/\___  \             *
 *             \ \ \___\ \ \/\ \ \  _-/\ \  __\\/_/  /__            *
 *              \ \_____\ \_____\ \_\   \ \_____\/\_____\           *
 *               \/_____/\/_____/\/_/    \/_____/\/_____/           *
 *                                                                  *
 *                             Feb-2021                             *
 */
void shell_sort(int *array, size_t size)
{
	size_t h, in, out;
	int stored;

	/* Determine "gap interval." */
	/*   from |    to   \/   | do     \/    */
	for (h = 1; h < size; h = h * 3 + 1)
	{} /* <--- this ends for loop at this line. */

	h = (h - 1) / 3;
	while (h > 0) /* Start while for the "gap" = h. */
	{
		for (out = h; out < size; out++) /* Move outer reference index. */
		{
			stored = array[out]; /* Store in case of swap. */
			in = out; /* Set inner index to outer one. */

			while (in > h - 1 && array[in - h] >= stored)
			{/* While moving back the index gap distance. */
				array[in] = array[in - h];
				in = in - h; /* Move index back h distance. */
			}

			array[in] = stored; /* Write stored value. */
		}

		h = h / 3; /* Divide the "gap" distance. */
		print_array(array, size); /* Aaaaand... print.*/
	}
}
