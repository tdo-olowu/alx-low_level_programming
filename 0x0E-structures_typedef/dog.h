#ifndef DOG_H
#define DOG_H

/**
 * dog - simulates a dog very cheaply.
 * @name: the chien's name
 * @age: the inu's age
 * @owner: aja's owner
 */
struct dog
{
	char *name;
	char *age;
	char *owner;
};

typedef struct dog dog_t;

#endif /* DOG_H */
