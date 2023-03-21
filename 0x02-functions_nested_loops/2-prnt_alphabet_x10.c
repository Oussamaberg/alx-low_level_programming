#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet,
 * in lowercase 10 times,
 i* followed by a new line.
 * Return: On success void.
 **/
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		print_alphabet();
		c++;
		_putchar('\n');
	}

}
