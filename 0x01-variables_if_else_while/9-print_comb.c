#include <stdio.h>

/**
 * main - stuff
 *Return: 0
 */

int main(void)
{
	char c;
	for (c = '0' ; c < 10 ; c++)
	{
		putchar(c);

		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
