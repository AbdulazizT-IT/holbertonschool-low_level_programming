#include "main.h"
#include <string.h>

char *_strstr(char *haystack, char *needle)
{
    int i, j;
    int len1 = strlen(haystack);
    int len2 = strlen(needle);
    int found;

    if (len2 == 0)
        return (haystack);

    for (i = 0; i <= len1 - len2; i++)
    {
        if (haystack[i] == needle[0])
        {
            found = 1;
            for (j = 1; j < len2; j++)
            {
                if (haystack[i + j] != needle[j])
                {
                    found = 0;
                    break;
                }
            }
            if (found == 1)
                return (&haystack[i]);
        }
    }
    return (NULL);
}
