#include "main.h"

/**
 * print_rev - prints a string
 * @s: ss
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		printf(s[i]);
	}

	putchar('\n');
}
