#include "main.h"
#include <stdio.h>
/**
 * print_number - print an integer n.
 * @n: The integer to print
 *
 * 
 */
int main(void)
{
	long n = 612852475143;
	long i;
	long j;
	int flag;

	for(i = n / 2; i > 1 ; i-- )
	{
		flag = 0;
		if ( n % i == 0)
		{
			for(j = i / 2 ; j > 2; j--)
			{
				if (i % j == 0)
				{
					flag = 1;
					break;
				}
			}

		
			if (flag == 0)
			{
				printf("%ld\n", i);
				break;
			}
		//	printf("%ld\n", i);
			
		}
		printf("%ld\n", i);
	}
	return (0);
}
