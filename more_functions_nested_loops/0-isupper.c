#include "main.h"
#include <ctype.h>

/**
  * _isupper - Checks for uppercase character
  * @c: The character to be checked
  *
  * Return: 1 for uppercase character or 0 for anything else
  */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}

	return (0);
}

