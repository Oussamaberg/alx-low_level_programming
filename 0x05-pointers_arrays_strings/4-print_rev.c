#include <string.h>
#include "main.h"
/**
 * print_rev -  prints a string, in reverse,
 * followed by a new line.
 * @s: The string reverse.
 * Return: void.
 */
void print_rev(char *s)
{
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
