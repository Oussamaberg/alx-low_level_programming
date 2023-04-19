#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @array: an array of integers
 * @size: the number of elements in the array
 * @cmp: a pointer to the function int_index
 * Return: index of first element that matches with
 * `cmp`, or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]) != 0)
			return (i);
	return (-1);
}
