#include "main.h"

/**
 * print_last_digit - stuff
 * Description: stuff
 * @n: stuff
 * Return: stuff
 */

int print_last_digit(int n)
{
	int z;

	if (n < 0)
	{
		n = -n;
	}

	z = n % 10;
	if (z < 0)
	{
		z = -z;
	}
	_putchar(z + '0');

	return (z);
}
