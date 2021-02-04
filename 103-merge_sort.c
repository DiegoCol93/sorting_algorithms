#include "sort.h"
#include <unistd.h>
/**
 */
void merge_sort(int *array, size_t size)
{
	merge(array, size);
}
/**
 */
void merge(int *array, size_t size)
{
	int *cpy;

	cpy = malloc(sizeof(int) * size);
	if (!cpy)
		exit(0);

	cpy_array(array, 0, size, cpy);
	/* print_array(cpy, size); */
	top_down_split(cpy, 0, size, array);
	free(cpy);
}
/**
 */
void top_down_split(int *cpy, size_t idx_b, size_t idx_e, int* array)
{
	size_t idx_mid = 0;

	if (idx_e - idx_b < 2)
		return;

	idx_mid = (idx_e + idx_b) / 2;

	top_down_split(array, idx_b, idx_mid, cpy);
	/* print_array(array, idx_e); */
	top_down_split(array, idx_mid, idx_e, cpy);

	printf("Merging...\n");
	printf("[left]: %d\n",array[idx_b]);
	printf("[right]: %d\n",array[idx_mid]);

	top_down_merge(cpy, idx_b, idx_mid, idx_e, array);
	printf("[Done]: ");
	print_array(cpy, idx_mid);
}
void top_down_merge(int *cpy, size_t idx_b, size_t idx_mid, size_t idx_e,
		    int *array)
{
	size_t i = 0, j = 0, k = 0;

	i = idx_b;
	j = idx_mid;

	for(k = idx_b; k < idx_e; k++)
		if (i < idx_mid && (j >= idx_e || array[i] <= array[j]))
		{
			cpy[k] = array[i];
			i++;
		}
		else
		{
			cpy[k] = array[j];
			j++;
		}
}
/**
 */
void cpy_array(int *array, size_t idx_b, size_t idx_e, int *cpy)
{
	size_t i = 0;

	for(i = idx_b; i < idx_e; i++)
		cpy[i] = array[i];
}
