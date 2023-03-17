#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry piont
 * generat a random int var n
 * Return: positive if the n is > 0 or negative if n < 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf(" %d is positive\n ", n);
	else
	{
		if (n == 0)
			printf(" %d is zero\n", n);
		else
			printf(" %d is negative\n ", n);
	}
	return (0);
}
