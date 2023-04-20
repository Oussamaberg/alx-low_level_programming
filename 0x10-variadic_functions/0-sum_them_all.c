#include <stdarg.h>
#include <stdio.h>


/**
 * sum_them_all - sum all args.
 * @n: num args.
 *
 * Return: sum or 0 if failled.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum = 0;
	unsigned int i;

	if  (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
