#include "main.h"

/**
 * print_rev - prints a string
 * @s: ss
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(s);
	for (i = len -1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
