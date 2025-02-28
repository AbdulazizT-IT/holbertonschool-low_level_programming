#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int sum = 0;
    char password[100];
    int i = 0, rand_char;

    srand(time(NULL));

    while (sum < 2772)
    {
        rand_char = (rand() % 94) + 33;
        if ((sum + rand_char) > 2772)
            break;
        password[i++] = rand_char;
        sum += rand_char;
    }

    password[i++] = (2772 - sum);
    password[i] = '\0';

    printf("%s\n", password);
    return (0);
}

