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
	unsigned long int a_half1, a_half2, b_half1, b_half2;
	unsigned long int next_half1, next_half2;
	int i;

	a_half1 = 754011380; /* First part of 92nd Fibonacci number */
	a_half2 = 4746346429;
	b_half1 = 1220016041; /* First part of 93rd Fibonacci number */
	b_half2 = 7282711261;

	for (i = 93; i <= 98; i++)
	{
		next_half1 = a_half1 + b_half1;
		next_half2 = a_half2 + b_half2;

		if (next_half2 >= 10000000000)
		{
			next_half1 += 1;
			next_half2 -= 10000000000;
		}

		printf(", %lu%010lu", next_half1, next_half2);

		a_half1 = b_half1;
		a_half2 = b_half2;
		b_half1 = next_half1;
		b_half2 = next_half2;
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
