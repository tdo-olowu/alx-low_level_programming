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
	int l_name, l_owner, i, j;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (l_name = 0 ; (name != NULL) && (name[l_name] != '\0') ; ++l_name)
		;
	for (l_owner = 0 ; (owner != NULL) && (owner[l_owner] != '\0') ; ++l_owner)
		;
	dog->name = malloc((l_name + 1) * sizeof(char));
	dog->age = age;
	dog->owner = malloc((l_owner + 1) * sizeof(char));
	if (dog->name != NULL)
	{
		for (i = 0 ; (name != NULL) && (i < l_name) ; ++i)
		{
			(dog->name)[i] = name[i];
		}
		(dog->name)[i] = '\0';
	}
	if (dog->owner != NULL)
	{
		for (j = 0 ; (owner != NULL) && (j < l_owner) ; ++j)
		{
			(dog->owner)[j] = owner[j];
		}
		(dog->owner)[j] = '\0';
	}
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	return (dog);
}
