#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_digit - Checks if a string contains only digits.
 * @s: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *s)
{
while (*s)
{
if (!isdigit(*s))
return (0);
s++;
}
return (1);
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string.
 *
 * Return: The length.
 */
int _strlen(char *s)
{
int len = 0;

while (s[len])
len++;
return (len);
}

/**
 * print_error - Prints an error message and exits.
 */
void print_error(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - Multiplies two positive numbers passed as arguments.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
char *num1, *num2;
int len1, len2, i, j, *result;
int n1, n2, sum;

if (argc != 3)
print_error();
num1 = argv[1];
num2 = argv[2];
if (!is_digit(num1) || !is_digit(num2))
print_error();
len1 = _strlen(num1);
len2 = _strlen(num2);
result = calloc(len1 + len2, sizeof(int));
if (!result)
print_error();
for (i = len1 - 1; i >= 0; i--)
{
n1 = num1[i] - '0';
for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
sum = result[i + j + 1] + n1 *n2;
result[i + j + 1] = sum % 10;
result[i + j] += sum / 10;
}
}
i = 0;
while (i < len1 + len2 && result[i] == 0)
i++;
if (i == len1 + len2)
putchar('0');
else
for (; i < len1 + len2; i++)
putchar(result[i] + '0');
putchar('\n');
free(result);
return (0);
}
