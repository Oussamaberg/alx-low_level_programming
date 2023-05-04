#include<stdio.h>
#include<string.h>

/**
 * print_binary - a function that converts a decimal to binary
 *
 * @n: decimal number to convert
 *
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	int i;
	char  bits[32];

	for (i = 0; n >= 1; i++)
	{
		bits[i] = n % 2 + '0';
		n /= 2;
	}
	bits[i] = '\0';
	for (i = strlen(bits); i >= 0; i--)
	{
		printf("%c", bits[i]);
	}
	printf("\n");
}
