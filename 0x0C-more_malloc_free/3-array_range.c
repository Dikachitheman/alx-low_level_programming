#include "main.h"

/**
 * array_range - creates an array of integers containing values from
 * min(included) to max(included), ordered from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *pt;
	int i;
	int n = ((max - min) + 1); /* +1 accounts for terminating null byte */

	if (min > max)

		return (NULL);

	pt = malloc(sizeof(int) * n); /* malloc */

	if (pt == NULL) /* check error */

		return (NULL);

	for (i = 0; i < n; i++)

		pt[i] = min++;

	return (pt);

}
