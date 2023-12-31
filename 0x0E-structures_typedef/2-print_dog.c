#include "dog.h"
#include <stdio.h>

#define GETATTR(attr) (((attr) == NULL) ? "(nil)" : (attr))

/**
 * print_dog - prints a summary of dog's attributes.
 * @d: pointer to the dog struct.
 * Return: none
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name, *owner;
		float age;
		char *msg = "Name: %s\nAge: %.6f\nOwner: %s\n";

		name = GETATTR(d->name);
		age = d->age;
		owner = GETATTR(d->owner);

		printf(msg, name, age, owner);
	}
}
