#include "main.h"
/**
 * factorial - kk
 * @n: nn
 * Return: kk
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
