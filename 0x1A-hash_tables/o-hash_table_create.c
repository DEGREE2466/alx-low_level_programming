#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates  a new hash table
 * @size: size of array to be created
 * Return: the newly created hashtable or return NULL or if error
 */

typedef struct {
    /* Define your hash table entry struct here */
} hash_table_entry_t;

typedef struct {
    unsigned long int size;
    hash_table_entry_t **entries;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size) {
    hash_table_t *table = malloc(sizeof(hash_table_t));
    if (table == NULL) {
        return NULL;
    }

    table->entries = malloc(size * sizeof(hash_table_entry_t *));
    if (table->entries == NULL) {
        free(table);
        return NULL;
    }

    for (unsigned long int i = 0; i < size; i++) {
        table->entries[i] = NULL;
    }

    table->size = size;

    return table;
}

