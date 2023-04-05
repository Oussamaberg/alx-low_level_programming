#include<stdio.h>
#include<string.h>

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: a string.
 * Return: Void.
 */

int _strlen_recursion(char *s);
{
	char *a;
	a = (s + strlen(s) - 1);
	if (*(a) != '\n')
	{
		putchar(*(a));
		s--;
		_print_rev_recursion(s);
	}
	
}
