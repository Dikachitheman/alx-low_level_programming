#include "main.h"
/**
 * print_alphabet - does that duhh
 *
 *Return: 0
 */

void print_alphabet(void)
{
	char k;

	k = 'a';

	while (k <= 'z')
	{
		_putchar(k);
		k++;
	}

	_putchar('\n');
}
