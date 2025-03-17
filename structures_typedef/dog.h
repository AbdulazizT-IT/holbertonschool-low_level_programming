#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure to store dog information
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Name of the owner (string)
 * dog_t - typedef
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;

}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif

