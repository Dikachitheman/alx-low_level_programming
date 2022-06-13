#include "main.h"

/**
 * print_array - ss
 * @a: ss
 * @n: dd
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] == a[n - 1])
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}

	putchar('\n');
}
