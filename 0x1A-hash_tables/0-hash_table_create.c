#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates  a new hash table
 * @size: size of array to be created
 * Return: the newly created hashtable or return NULL or if error
 */

hash_table_t *hash_table_create(unsigned long int size);
{
    // Creates a new HashTable.
    hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
    table->size = size;
    table->count = 0;
    table->items = (Ht_item**) calloc(table->size, sizeof(Ht_item*));

    for (int i = 0; i < table->size; i++)
        table->items[i] = NULL;

    return table;
}
