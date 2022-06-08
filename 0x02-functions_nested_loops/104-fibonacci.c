#include <stdio.h>
/**
 * main - stuff
 * Description: stuff
 * Return: stuff
 */

int main(void)
{
	int c, boolean, boolean2;
	long int n1, n2, f, f2, n3, n4;

	n1 = 1;
	n2 = 2;
	boolean = boolean2 = 1;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 96; c++)
	{
		if (boolean)
		{
			f = n1 + n2;
			printf(", %ld", fn);
			n1 = n2;
			n2 = f;
		}
		else
		{
			if (boolean)
			{
				n3 = n1 % 1000000000;
				n4 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				boolean2 = 0;
			}
			f2 = (n3 + n4);
			f = n1 + n2 + (f2 / 1000000000);
			printf(", %ld", f);
			printf("%ld", f2 % 1000000000);
			n1 = n2;
			n3 = n4;
			n2 = f;
			n4 = (f2 % 1000000000);
		}
		if (((n1 + n2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
