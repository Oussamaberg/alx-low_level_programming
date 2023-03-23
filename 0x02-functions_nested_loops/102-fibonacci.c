#include <stdio.h>

/*
 * main - print the first 50 fibonacci numbers.
 * Return: always 0.
 */

int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	int i = 2;

	printf("%ld, %ld, ", a, b);
	while (i < 50)
	{
		c = a + b;
		if (i == 49)
			printf("%ld", c);
		else
			printf("%ld, ", c);
		a = b;
		b = c;
		i++;
	}
	printf("\n");

	return (0);
}
