#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print positive, negative or is zero depending on sign of rand int
 *
 * Return: 0
 */

int main(void)
{
	int n;
        srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)

	{
		printf ("is positve");
	}
	else if (n<0)
	{
		printf ("is negative");
	}
	else printf ("is zero")
	return (0);

}
