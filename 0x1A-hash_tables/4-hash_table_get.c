#include "hash_tables.h"


/**
 * hash_table_get - retrieves the value associated with a key.
 * @ht: the pointer to the hash table.
 * @key: the key whose value to obtain.
 * Return: the value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *crr_node;

	if ((ht == NULL) || (key == NULL))
		return (NULL);
	/* find the bucket... */
	index = key_index((const unsigned char *)key, ht->size);
	/* traverse down the linked list till you find the value */
	crr_node = ht->array[index];
	while (crr_node != NULL)
	{
		if (strcmp(key, crr_node->key) == 0)
			return (crr_node->value);
		crr_node = crr_node->next;
	}

	return (NULL);
}
