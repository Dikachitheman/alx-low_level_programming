#include "main.h"

/**
 * print_line - draw straight line int the terminal
 * @n: stuff
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i < n + 1; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
