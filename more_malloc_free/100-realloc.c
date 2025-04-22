#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: the size of the allocated space for ptr
 * @new_size: the new size of the new memory block
 *
 * Return: pointer to the new memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *new_ptr, *old_ptr;

/* If new_size == old_size, return ptr */
if (new_size == old_size)
return ptr;

/* If ptr is NULL, equivalent to malloc(new_size) */
if (ptr == NULL)
return malloc(new_size);

/* If new_size is 0 and ptr is not NULL, free and return NULL */
if (new_size == 0)
{
free(ptr);
return NULL;
}

/* Allocate new memory */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return NULL;

/* Copy contents from old memory to new memory */
old_ptr = ptr;
for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = old_ptr[i];

/* Free old memory */
free(ptr);

return new_ptr;
}
