#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print the name.
 * @f: the par
 * @name: The name.
 *
 */
void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
