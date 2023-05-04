#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *  get_bit - returns the value of a bit at a given index.
 * @n: decimal number.
 * @index: index.
 * Return: bit by index;
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	char bits[32];

	if (n == 0)
		return ('0');
	for (i = 0; n >= 1; i++)
	{
		bits[i] = n % 2 + '0';
		n /= 2;
	}
	bits[i] = '\0';
	if (strlen(bits) - 1 < index)
		return ('0');
	return (bits[index] - '0');
}
