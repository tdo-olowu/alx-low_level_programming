#include "hash_tables.h"


/**
 * hash_table_set - adds an element to the hash table.
 * @ht: address of the hash table
 * @key: the key of the hash?
 * @value: the value of the hash
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int failure = 1, success = 0;
	unsigned long int key_ind;
	char *temp_str;
	hash_node_t *head_node, *node;

	/* make sure ht is not null */
	if (ht == NULL)
		return (failure);
	/* make sure key is neither null nor empty */
	if ((key == NULL) || (key[0] == '\0'))
		return (failure);

	/* get the index from the key */
	key_ind = key_index((const unsigned char *)key, ht->size);
	/* can key_ind ever be larger than size? implausible. */

	/* make sure the ht isn't storing an unusable array */
	if ((ht->array == NULL) || ((ht->array)[0] == NULL))
		return (failure);

	/* this is an array like any other. access the location O(1) */
	head_node = (ht->array)[key_ind];
	/* traverse down the list, searching for the value */
	while (head_node != NULL)
	{
		if (strcmp(key, head_node->key) == 0)
		{
			/* keys match, update value */
			temp_str = strdup(value);
			if (temp_str == NULL)
				return (failure);
			free(head_node->value);
			head_node->value = temp_str;
			return (success);
		}
		head_node = head_node->next;
	}
	/* if we haven't returned at this point, the key doesn't exist */
	/* create a new node for the occasion */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (failure);
	node->key = strdup(key);
	node->value = strdup(value);
	if ((node->key == NULL) || (node->value == NULL))
	{
		free(node->key);
		free(node->value);
		free(node);
		return (failure);
	}
	node->next = (ht->array)[key_ind];
	(ht->array)[key_ind] = node;

	return (success);
}
