#include "main.h"
/**
 * string_toupper - yy
 *@s: kk
 *Return: ll
 */

char *string_toupper(char *s)
{
	int p;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] >= 'a' && s[p] <= 'z')
			s[p] = s[p] - 32;
	}

	return (s);
}
