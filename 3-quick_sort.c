#include "sort.h"
/**
 */
#include <unistd.h>
void quick_sort(int *array, size_t size)
{
	unsigned int pivot = 0;
	int *ptr = array;


	if (size > 1)
	{
		pivot = partition(array, pivot, size - 1);
		print_array(ptr, 10);
		quick_sort(array + pivot, size - pivot);
		if (pivot)
		{
			quick_sort(array, pivot++);
		}
	}
}
/**
 */
unsigned int partition(int *array, unsigned int low, unsigned int hig)
{
	int swp = 0, pivot = array[hig];
	unsigned int i = low, j = low;
	char *green = "\033[92m", *reset = "\033[0m";

	for (j = low; j < hig; j++)
		if (array[j] < pivot)
		{
			swp = array[j];
			array[j] = array[i];
			array[i] = swp;
			i++;
			sleep(1);
			printf("---array[0]--->%s%d%s\n", green, array[0], reset);
			printf("---array[1]--->%s%d%s\n", green, array[1], reset);
			printf("---array[2]--->%s%d%s\n", green, array[2], reset);
			printf("~~~~~~~~~~~~~~~~~~~~\n");
		}
	swp = array[hig];
	array[hig] = array[i];
	array[i] = swp;
	return (i);
}
