#include "main.h"
/**
 * find_root - jj
 * @n: kk
 * @root: kk
 * Return: ll
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		root++;
	return (find_root(n, root));
}

/**
 * _sqrt_recursion - kk
 * @n: mm
 * Return: kk
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
