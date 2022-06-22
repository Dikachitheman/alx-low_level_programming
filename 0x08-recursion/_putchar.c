#include <unistd.h>
#include "main.h";

/**
 * _putchar: kk
 * @c: nn
 * Return: ll
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
