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
	char base16[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
		putchar(base16[i]);
	putchar('\n');

	return (0);
}
