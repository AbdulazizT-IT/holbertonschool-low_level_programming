#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * word_count - Counts the number of words in a string
 * @str: The input string
 * Return: Number of words
 */
int word_count(char *str)
{
int count = 0, in_word = 0;

while (*str)
{
if (!isspace(*str) && in_word == 0)
{
in_word = 1;
count++;
}
else if (isspace(*str))
{
in_word = 0;
}
str++;
}

return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **words;
int i = 0, k = 0, wc, start, end, len;
if (str == NULL || *str == '\0')
return (NULL);
wc = word_count(str);
if (wc == 0)
return (NULL);
words = malloc((wc + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
while (str[i])
{
while (isspace(str[i]))
i++;
start = i;
while (str[i] && !isspace(str[i]))
i++;
end = i;
len = end - start;
if (len > 0)
{
words[k] = malloc((len + 1) * sizeof(char));
if (words[k] == NULL)
{
while (k--)
free(words[k]);
free(words);
return (NULL);
}
strncpy(words[k], str + start, len);
words[k][len] = '\0';
k++;
}
}
words[k] = NULL;
return (words);
}
