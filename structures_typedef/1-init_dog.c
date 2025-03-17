#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function for dog
 * struct dog - A structure to store information about a dog
 * @d: The pointer for struct
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * Description: This structure is used to store basic information about a dog,
 * including its name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{


	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

}
