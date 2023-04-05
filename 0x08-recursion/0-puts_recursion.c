#include<stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: a string.
 * Return: Void.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
	        s++;
		_puts_recursion(s);
	}
	else
		 putchar('\n');
}
