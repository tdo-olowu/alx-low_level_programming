#include "main.h"

/**
 * free_dog - but you'll have to spend money to care for it.
 * @d: pointer to the obj to be freed from memory.
 * Return: no return
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
