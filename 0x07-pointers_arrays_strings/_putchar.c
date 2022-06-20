#include <unistd.h>
#include "main.h"

/**
 * _putchar - kk
 * @c: ll
 * Return: kk
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
