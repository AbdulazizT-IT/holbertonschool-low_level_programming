#include <stdio.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (Success)
 */
int main(void)
{

	int c, n, x;

	for (c = '0' ; c <= '9' ; c++)
	{
		for (n = '0' ; n <= '9' ; n++)
		{
			for (x = '0' ; x <= '9' ; x++)
			{
				if (c < n && n < x)
				{
					putchar(c);
					putchar(n);
					putchar(x);
					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
