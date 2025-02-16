#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (Success)
 */
int main(void)
	{
	char Salphabet = 'a';

	char Kalphabet = 'A';

	while (Salphabet <= 'z')
	{
		putchar(Salphabet);
		Salphabet++;
	}
	while (Kalphabet <= 'Z')
	{
		putchar(Kalphabet);
		Kalphabet++;
	}
	putchar ('\n');
	return (0);
}
