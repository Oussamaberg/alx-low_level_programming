#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello,z  woruld maga ze lolo world zebkk";
    char *f = "zebkk";
    char *t;

    t = _strstr(s, f);
    if (t != NULL)
    	printf("%s\n", t);
    else
	    printf("not found\n");
    return (0);
}
