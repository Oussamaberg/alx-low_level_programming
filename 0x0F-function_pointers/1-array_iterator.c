#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the function print_name
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action || size <= 0)
		return;
	for(i = 0; i < size; i++)		
	(*action)(array[1]);
}
