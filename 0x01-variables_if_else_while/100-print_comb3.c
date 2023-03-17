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

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i < 56)
				{
					putchar(',');
					putchar(' ');
				}
				else
					putchar('\n');
			}
		}
	}

	return (0);
}
