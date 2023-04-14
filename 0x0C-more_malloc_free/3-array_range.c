#include "main.h"
#include<stdlib.h>
#include<stdio.h>


/**
 * _memset - fills memory with a constant byte
 * @p: memory area to be filled
 * @min: char to copy
 * @len: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
int *_memset(int *p, int min, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		p[i] = min + i;
	}

	return (p);
}

/**
 * *array_range - creates an array of integers.
 * @min: min.
 * @max: max.
 * Return: pointer.
 */

int *array_range(int min, int max)
{
	int *p;
	unsigned int len;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	p = malloc(len * sizeof(int));
	if (p == NULL)
		return (NULL);
	_memset(p, min, len);
	return (p);
}
