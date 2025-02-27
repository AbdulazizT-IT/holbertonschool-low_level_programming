#include "main.h"

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	while (end > s)
	{
		end--;
		_putchar(*end);
	}

	_putchar('\n');
}
