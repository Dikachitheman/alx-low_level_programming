#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - stuff
 *Return: 0
 */
int main(void)
{
	int n,i;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf ("%d",n);
	i = (n%10);
	if (i> 5)
	{
		printf ("Last digit of %d is %d and is greater than 5", n, i);
	}
		else if (i==0)
		{
			printf ("Last digit of %d is %d and is 0", n, i);
		}
		else if ((i<6) && (i!=0))
		{
			printf ("Last digit of %d is %d and is less than 6 and not 0", n, i);
		}
		return (0);
}