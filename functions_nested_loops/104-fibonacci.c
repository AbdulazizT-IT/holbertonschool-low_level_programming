#include <stdio.h>

/**
 * print_first_92_fibonacci - Prints the first 92 Fibonacci numbers.
 */
void print_first_92_fibonacci(void)
{
	unsigned long int a = 1, b = 2, next;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 92; i++)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}
}

/**
 * print_remaining_fibonacci - Prints Fibonacci numbers from 93 to 98.
 * Uses split integer representation for large numbers.
 */
void print_remaining_fibonacci(void)
{
	unsigned long int a1, a2, b1, b2;
	unsigned long int next1, next2;
	int i;

	a1 = 7540113804746346429 / 10000000000;
	a2 = 7540113804746346429 % 10000000000;
	b1 = 12200160415121876738 / 10000000000;
	b2 = 12200160415121876738 % 10000000000;

	for (i = 93; i <= 98; i++)
	{
		next1 = a1 + b1;
		next2 = a2 + b2;

		if (next2 >= 10000000000)
		{
			next1 += 1;
			next2 -= 10000000000;
		}

		printf(", %lu%010lu", next1, next2);

		a1 = b1;
		a2 = b2;
		b1 = next1;
		b2 = next2;
	}
}

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	print_first_92_fibonacci();
	print_remaining_fibonacci();
	printf("\n");
	return (0);
}
