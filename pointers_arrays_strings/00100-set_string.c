#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Double pointer to a string that will be updated
 * @to: Pointer to the string to assign
 *
 * Description: This function updates the value of a pointer to point
 * to another string.
 *
 * Return: Nothing (void)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
