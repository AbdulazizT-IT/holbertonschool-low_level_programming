#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (Success)
 */
int main (void)
	{

	int n;

	for (n = 0 ; n < 10 ; n++)
	{

		putchar(n + '0');
	}
	putchar ('\n');
	return (0);
}
