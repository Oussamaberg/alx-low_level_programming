#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string,
 * followed by a new line,
 * @s: The string to print half.
 * Return: void.
 */
void puts_half(char *s)
{
	int length_of_the_string = strlen(s);
	int i;

	if (length_of_the_string % 2 == 0)
		i = (length_of_the_string) / 2;
	else
		i = (length_of_the_string + 1) / 2;

	for (; i < length_of_the_string; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
