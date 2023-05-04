#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_number - print an integer n.
 * @n: The integer to print
 *
 * Return: void.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int res = 0;
	int add_one = 0;
	int len_n1;
	int len_n2;

	len_n1 = strlen(n1);
	len_n2 = strlen(n2);
	r[len_n1] = '\0';
	i = len_n1 - 1;
	j = len_n2 -1;
	while (i >= 0)
	{
		if (j < 0)
			res = n1[i] - '0';
		else
			res = n1[i] + n2[j] - 2 * '0';
		if (add_one == 1)
		{
			res++;
			add_one = 0;
			if (i == 0)
			{
				r[0] = '0';
				for(j = len_n1 - 1; j >= 0; j--)
				{
					r[j+1] = r[j];
				}
				r[0] = '1';

				break;
			}
		}
		r[i] = res % 10 + '0';
		if (res >= 10)
			add_one = 1;
		
		if (len_n1 + 1 > size_r)
			return (0);
		i--;
		j--;
	}
	return (r);
}
