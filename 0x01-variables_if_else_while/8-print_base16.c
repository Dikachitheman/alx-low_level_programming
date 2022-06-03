#include <stdio.h>

/**
 * main - stuff
 *Return: 0
 */

int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10;)
	{
		putchar(a);
		a++;
	}

	for (b ='a'; b < 'g';)
	{
		putchar(b);
	        b++;
	}
	putchar('\n');
	return (0);
}
