#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: pointer to dog_t, which is alias for struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l_name, l_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (l_name = 0 ; name[l_name] != '\0' ; ++l_name)
		;
	for (l_owner = 0 ; owner[l_owner] != '\0' ; ++l_owner)
		;

	dog->name = malloc((l_name + 1) * sizeof(char));
	dog->age = age;
	dog->owner = malloc((l_owner + 1) * sizeof(char));
	if (dog->name != NULL)
	{
		for ( ; l_name >= 0 ; --l_name)
			(dog->name)[l_name] = name[l_name];
	}
	if (dog->owner != NULL)
	{
		for ( ; l_owner >= 0 ; --l_owner)
			(dog->owner)[l_owner] = owner[l_owner];
	}

	return (dog);
}
