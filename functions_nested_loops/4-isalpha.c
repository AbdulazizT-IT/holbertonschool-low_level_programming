#include "main.h"
#include <ctype.h>

/**
  * _isalpha - Checks for alphabetic character
  * @c: The character to be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}

	return (0);
}
