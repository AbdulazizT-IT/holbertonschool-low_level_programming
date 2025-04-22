#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digits - Checks if a string consists only of digits
 * @s: The string to check
 * Return: 1 if all digits, 0 otherwise
 */
int is_digits(char *s)
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
 * print_result - Prints the multiplication result
 * @result: Array containing the result digits
 * @len: Length of the result array
 */
void print_result(int *result, int len)
{
int i = 0;
while (i < len && result[i] == 0)
i++;

if (i == len)
putchar('0');
else
{
for (; i < len; i++)
putchar(result[i] + '0');
}
putchar('\n');
}

/**
 * main - Multiplies two positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
char *num1, *num2;
int len1, len2, len, i, j, n1, n2, *result, carry;

if (argc != 3 || !is_digits(argv[1]) || !is_digits(argv[2]))
{
printf("Error\n");
exit(98);
}

num1 = argv[1];
num2 = argv[2];
len1 = strlen(num1);
len2 = strlen(num2);
len = len1 + len2;

result = calloc(len, sizeof(int));
if (!result)
{
printf("Error\n");
exit(98);
}

for (i = len1 - 1; i >= 0; i--)
{
n1 = num1[i] - '0';
carry = 0;

for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
carry += result[i + j + 1] + (n1 *n2);
result[i + j + 1] = carry % 10;
carry /= 10;
}
result[i + j + 1] += carry;
}

print_result(result, len);
free(result);
return (0);
}
