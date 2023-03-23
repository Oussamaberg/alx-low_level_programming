#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	long sum = 2;
	int max_val = 4000000;

	while (c < max_val)
	{
		c = a + b;
		if (c % 2 == 0)
			sum = sum + c;
		printf("%ld",sum);
		a = b;
		b = c;
	}
	printf("%ld\n", sum);

	return (0);
}
