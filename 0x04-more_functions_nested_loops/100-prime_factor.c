#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - print the biggest prime factor.
 *Return: always 0.
 */
int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i < sqrt(n); i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%ld\n", n);
	return (0);
}
