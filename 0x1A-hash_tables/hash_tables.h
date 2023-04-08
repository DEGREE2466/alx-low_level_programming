#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
<<<<<<< HEAD
 * struct hash_node_s - Node of a hash table
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
=======
 * struct hash_node_s -  The node of the hash table
 * @key: The key, the string
 * The key is so unique in the new HashTable
 * @value: The value that corresponds to a given key
 * @next: The pointer that points to the next node of the List
>>>>>>> 06876c371ab0c4a6c6ae7cb469b2af49fb2583bb
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
<<<<<<< HEAD
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
=======
 * struct hash_table_s - The HashTable data structure
 * @size: The size of the data array
 * @array: An array of the size @size
 * Each cell of this array is a pointer pointing to the first node of a linked list,
 * This is because we intend to use our HashTable as a Chaining collision handling
>>>>>>> 06876c371ab0c4a6c6ae7cb469b2af49fb2583bb
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - Node of a sorted hash table
 * @key: The key, string
 * The key is unique in the HashTable
<<<<<<< HEAD
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
=======
 * @value: The value that corresponds to a key
 * @next: A pointer pointing to the next node of the List
 * @sprev: A pointer pointing to the previous element of the sorted linked list
 * @snext: A pointer pointing to the next element of the sorted linked list
>>>>>>> 06876c371ab0c4a6c6ae7cb469b2af49fb2583bb
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
<<<<<<< HEAD
 * struct shash_table_s - Sorted hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
=======
 * struct shash_table_s - The sorted data structure of the HashTable
 * @size: The size of the table array
 * @array: An array of the size @size
 * Each cell of this array is a pointer pointing to the first node of a linked list,
 * this is because we want our HashTable to utilize a Chaining collision handling
 * @shead: A pointer pointing to the first element of the sorted linked list
 * @stail: A pointer pointing to the last element of the sorted linked list
>>>>>>> 06876c371ab0c4a6c6ae7cb469b2af49fb2583bb
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H */
<<<<<<< HEAD
=======
Footer
>>>>>>> 06876c371ab0c4a6c6ae7cb469b2af49fb2583bb
