#include "main.h"
#include <stdio.h>
/**
 * main - stuff
 * Description: stuff
 * Return: stuff
 */

int main(void)
{
	int sum;
	int i;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
