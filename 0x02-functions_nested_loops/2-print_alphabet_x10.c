#include "main.h"

/**
 * print_alphabet_x10 - does that
 */

void print_alphabet_x10(void)
{
	char a;
	int c;

	c = 0;

	while (c < 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
		c++;
	}
}
