#include "main.h"

/**
 * *_memcpy - cc
 * @dest: ll
 * @src: ss
 * @n: nn
 * Return: jj
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
