#include "main.h"
#include <ctype.h>

/**
  * _isdigit - Checks for character
  * @c: The character to be checked
  *
  * Return: 1 for digit  or 0 for anything else
  */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
