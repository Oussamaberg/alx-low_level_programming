#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry piont
 * generat a random int var n
 * Return: positive if the n is > 0 or negative if n < 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if ((i != j && i != k && j != k) && i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 55)
					{
						putchar(',');
						putchar(' ');
					}
					else
						putchar('\n');
				}
			}
		}
	}

	return (0);
}
