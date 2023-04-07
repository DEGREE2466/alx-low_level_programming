#include "hash_tables.h"

/**
 * hash_table_create - Creates  a new hash table
 * @size: size of array to be created
 * Return: the newly created hashtable or return NULL or if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hsh = malloc(sizeof(hash_table_t));
	if (hsh == NULL)
		return (NULL);

	hsh->array = malloc(sizeof(hash_node_t *) * size);
	if (hsh->array == NULL)
	{
		free(hsh);
		return (NULL);
	}
	hsh->size = size;

	for (i = 0; i < size; i++)
		hsh->array[i] = NULL;

	return (hsh);
