include "main.h"

/**
 * jack_bauer - all minutes in a day
 *Description: stuff
 *Return: void
 */

void jack_bauer(void)
{
	int hr;

	for (hr = 0; hr < 24; hr++)
	{
		int mn;

		for (mn = 0; mn < 60; mn++)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar('0' + (mn / 10));
			_putchar('0' + (mn % 10));
			_putchar('\n');
		}
	}
}
