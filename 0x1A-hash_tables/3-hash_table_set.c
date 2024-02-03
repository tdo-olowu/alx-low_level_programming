#include "hash_tables.h"
#define FAILURE 0
#define SUCCESS 1


/**
 * hash_table_set - adds an element to the hash table.
 * @ht: address of the hash table
 * @key: the key of the hash?
 * @value: the value of the hash
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_ind;
	hash_node_t *head_node, *node;

	if ((ht == NULL) || (key == NULL) || (key[0] == '\0'))
		return (FAILURE);
	key_ind = key_index((const unsigned char *)key, ht->size);
	if (ht->array == NULL)
		return (FAILURE);

	head_node = ht->array[key_ind];
	while (head_node != NULL)
	{
		if (strcmp(key, head_node->key) == 0)
		{
			free(head_node->value);
			head_node->value = strdup(value);
			if (head_node->value == NULL)
				return (FAILURE);
			return (SUCCESS);
		}
		head_node = head_node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (FAILURE);
	node->key = strdup(key);
	node->value = strdup(value);
	if ((node->key == NULL) || (node->value == NULL))
	{
		free(node->key);
		free(node->value);
		free(node);
		return (FAILURE);
	}
	node->next = ht->array[key_ind];
	ht->array[key_ind] = node;
	return (SUCCESS);
}
