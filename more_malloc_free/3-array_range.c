#include "main.h"
#include <stdlib.h>

/**
 * array_range - print an array from min to max.
 * @min: the min.
 * @max: the max
 * Return: Pointer to the new array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < (max - min + 1) ; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

