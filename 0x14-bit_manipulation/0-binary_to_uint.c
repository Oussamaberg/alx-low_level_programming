#include<stdio.h>
#include<string.h>

/**
 * binary_to_uint - a function that converts a binary number
 *                  to an unsigned int
 *
 * @b: string that contains 0 and 1 characters
 *
 * Return: the number converted or 0
 *         if @b contains a character
 *         that is not 0 or 1 or when
 *         @b is null
*/

unsigned int binary_to_uint(const char *b)
{
	int i, bit, base = 1;
	unsigned int uint = 0;

	if (b == NULL)
		return (0);

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		bit = b[i] - '0';
		uint += bit * base;
		base = base * 2;
	}
	return (uint);
}
