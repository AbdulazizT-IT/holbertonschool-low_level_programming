#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Always (Success)
 */
void more_numbers(void)
{
	int n, x;

	for (n = 0 ; n < 10 ; n++)
	{
		for (x = 0 ; x <= 14 ; x++)
		{
			if (x > 9)
				_putchar ('1');
			_putchar ((x % 10) + '0');


		}
	_putchar ('\n');

	}

}
