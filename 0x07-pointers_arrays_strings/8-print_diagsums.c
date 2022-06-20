#include "main.h"

/**
 * print_diagsums - kk
 * @a : jj
 * @size: cc
 * Return: kk
 */

void print_diagsums(int *a, int size)
{
	int row, i;
	int d1 = 0;
	int d2 = 0;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		d1 += a[i];
	}

	for (row = 1; row < size; row++)
	{
		i = (row * size) - row;
		d2 += a[i];
	}

	printf("%d, %d\n", d1, d2);
}
