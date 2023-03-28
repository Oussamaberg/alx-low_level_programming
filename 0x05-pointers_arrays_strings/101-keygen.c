#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int checksum;
	int random_number;
	time_t t;

	checksum = 0;
	srand((unsigned) time(&t));
	while(checksum != 2772)
	{	
       		random_number = rand() % 74 + 48;
	 	putchar(random_number);
		checksum = checksum + random_number;
		if(((2772 - checksum) < 123) && ((2772 - checksum) > 47))
		{
			putchar((2772 - checksum));
			break;
		}    
	}
	return (0);
}
