#ifndef DOG_H
#define DOG_H

#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


/**
 * struct dog - simulates a dog very cheaply.
 * @name: the chien's name
 * @age: the inu's age
 * @owner: aja's owner
 *
 * Description: longer description
 */
struct dog
{
	char *name;
	char age;
	char *owner;
};

typedef struct dog dog_t;

#endif /* DOG_H */
