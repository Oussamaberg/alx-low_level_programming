#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the number to calculate times table causes an infinite loop
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int times = 0;
	int i;
	int num;

	while (times <= n)
	{
		if (n > 15 || n < 0)
			break;
		i = 0;
		num = 0;
		printf("0");
		if (n == 0)
			printf("\n");
		else
			printf(",");
		while (i < n)
		{
			num = num + times;
			if (num <= 9)
				printf("   %d", num);
			else if (num < 100)
				printf("  %d", num);
			else
				printf(" %d", num);
			if (i == n - 1)
				printf("\n");
			else
				printf(",");
			i++;
		}
		times++;
	}

}
