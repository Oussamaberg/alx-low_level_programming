#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - print all args.
 * @separator: separator
 * @n: num args.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if  (separator == NULL)
		separator = "";
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			separator = "\n";
		printf("%d%s", va_arg(ptr, int), separator);
	}
	va_end(ptr);
}
