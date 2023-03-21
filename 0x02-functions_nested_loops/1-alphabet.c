#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - writes the character c to stdout
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
