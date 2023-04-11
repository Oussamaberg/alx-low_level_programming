#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte.
 * @s: string.
 * @b: a byte.
 * @n: size.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
