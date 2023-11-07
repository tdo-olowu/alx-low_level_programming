#ifndef DOG_H
#define DOG_H

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
	float age;
	char *owner;
};


/**
 * dog_t - typedef for dog struct.
 */
typedef struct dog dog_t;

#endif /* DOG_H */
