#include <stdio.h>

#define LIMIT 98
#define SPLIT_THRESHOLD 10000000000

int main(void)
{
    unsigned long a = 1, b = 2, temp;
    unsigned long a_high = 0, a_low = 1;
    unsigned long b_high = 0, b_low = 2;
    unsigned long temp_high, temp_low;
    int i;

    printf("%lu, %lu", a, b);

    for (i = 3; i <= 92; i++)  // قبل الوصول إلى الأعداد الكبيرة
    {
        temp = a + b;
        a = b;
        b = temp;
        printf(", %lu", b);
    }

    for (; i <= LIMIT; i++)  // بعد تجاوز نطاق `unsigned long`
    {
        temp_low = a_low + b_low;
        temp_high = a_high + b_high;

        if (temp_low >= SPLIT_THRESHOLD)
        {
            temp_high++;
            temp_low -= SPLIT_THRESHOLD;
        }

        printf(", %lu%010lu", temp_high, temp_low);

        a_low = b_low;
        a_high = b_high;
        b_low = temp_low;
        b_high = temp_high;
    }

    printf("\n");
    return (0);
}

