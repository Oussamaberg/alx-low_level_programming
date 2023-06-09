#include<stdio.h>

/**
 *  _strlen_recursion - returns the length of a string.
 * @s: a string.
 * Return: int strlen.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
