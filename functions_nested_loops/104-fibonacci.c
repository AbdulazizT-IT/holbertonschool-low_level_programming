#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int a = 1, b = 2, next;
    unsigned long int a_half1, a_half2, b_half1, b_half2, next_half1, next_half2;
    int i;

    printf("%lu, %lu", a, b);

    for (i = 3; i <= 92; i++)
    {
        next = a + b;
        printf(", %lu", next);
        a = b;
        b = next;
    }

    a_half1 = a / 1000000000;
    a_half2 = a % 1000000000;
    b_half1 = b / 1000000000;
    b_half2 = b % 1000000000;

    for (; i <= 98; i++)
    {
        next_half1 = a_half1 + b_half1;
        next_half2 = a_half2 + b_half2;

        if (next_half2 >= 1000000000)
        {
            next_half1 += 1;
            next_half2 -= 1000000000;
        }

        printf(", %lu%09lu", next_half1, next_half2);

        a_half1 = b_half1;
        a_half2 = b_half2;
        b_half1 = next_half1;
        b_half2 = next_half2;
    }

    printf("\n");
    return (0);
}
