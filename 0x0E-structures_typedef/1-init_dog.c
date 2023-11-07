#include "dog.h"
#include "stdio.h"

/**
 * init_dog - initialises a dog struct.
 * @d: pointer to the dog struct
 * @name: what you want to name the dog
 * @age: what age is the dog?
 * @owner: the dog's legal owner
 *
 * Return: no return value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
