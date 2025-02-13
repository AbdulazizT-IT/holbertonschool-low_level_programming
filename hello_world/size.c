#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of unsigned int: %zu byte(s)\n", sizeof(unsigned int));
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
