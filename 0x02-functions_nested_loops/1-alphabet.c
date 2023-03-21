#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 *
 *  Return: On success void.
 **/
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
