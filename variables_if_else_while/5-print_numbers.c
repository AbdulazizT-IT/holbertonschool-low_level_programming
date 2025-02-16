#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}
	putchar ('\n');
	return (0);
}
