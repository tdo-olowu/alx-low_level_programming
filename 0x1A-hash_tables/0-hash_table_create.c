#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 *
 * @size: the size of the table
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newt;
	hash_node_t **arr;

	/* ask for memory */
	newt = malloc(sizeof(hash_table_t));
	if (newt == NULL)
		return (NULL);

	/* if that worked, initialise and ask for more memry */
	newt->size = size;
	arr = malloc(size * sizeof(hash_node_t *));
	if (arr == NULL)
	{
		/* always release memry you asked for */
		free(newt);
		return (NULL);
	}
	/* if that worked, initialise as needed */
	newt->array = arr;

	return (newt);
}
