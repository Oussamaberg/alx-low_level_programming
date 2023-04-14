#include "main.h"
#include<stdlib.h>
#include<stdio.h>


/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of items.
 * @size: size of item.
 * Return: pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int len;

	len = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(len);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, len);
	return (p);
}
