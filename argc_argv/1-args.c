#include <stdio.h>

/**
 * main - Prints the program name followed by a new line
 * @argc: Argument count
 * @argv: Argument vector (unused)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	argc--;
	printf("%d\n", argc);
	return (0);
}
