#include "main.h"
/**
 * print_triangle - ss
 * @size: ss
 * Return: ss
 */

void print_triangle(int size)
{
	int l, h, b;

	if (size <= 0)
		_putchar('\n');

	for (h = 1; h <= size; h++)
	{
		for (b = 1; b <= (size - h); b++)
			_putchar(' ');

		for (l = 1; l <= h; l++)
			_putchar(35);

		_putchar('\n');
	}
}
