#include "main.h"

/**
 * *_strchr - jj
 * @s: jj
 * @c: jj
 * Return: ll
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
