#include <stdio.h>
#include <math.h>

/**
 * main - entry ss
 * Return: ss
 * Description: ss
 */

int main(void)
{
	long int n, mx, i;

	mx = -1;
	n = 612852475143;

	while (n % 2 == 0)
	{
		mx = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(2); i = i + 2)
	{
		while (n % i == 0)
		{
			mx = i;
			n = n / 1;
		}
	}

	if (n > 2)
	{
		mx = 2;
	}

	printf("%ld\n", mx);

	return (0);
}
