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
	int l;
	int m;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (l = 48; l < 58; l++)
			{
				for (m = 48; m < 58; m++)
				{
					if ((i * 10 + j) < (l * 10 + m))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(l);
						putchar(m);
						if (i == 57 && j == 56)
							putchar('\n');
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	return (0);
}
