#include "main.h"
/**
 * _strspn - bb
 * @s: kk
 * @accept: kk
 * Return: kk
 */

unsigned int_strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + 1) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + 1) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
