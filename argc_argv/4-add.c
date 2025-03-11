#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Checks if a string consists only of numeric digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_number(char *str)
{
	int j = 0;

	if (str[0] == '\0')
	{
		return (0);
	}
	while (str[j] != '\0')
	{
		if (!isdigit(str[j]))
		{
			return (0);
		}
		j++;
	}
	return (1);
}

/**
 * main - Prints the program name followed by a new line
 * @argc: Argument count (unused)
 * @argv: Argument vector (contains program name)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
