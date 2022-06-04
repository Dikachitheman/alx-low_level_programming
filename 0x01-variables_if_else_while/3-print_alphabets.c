#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - stuff
 * Return: 0
 */

int main(void)
{
	char ch = 'a';
	char c = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
