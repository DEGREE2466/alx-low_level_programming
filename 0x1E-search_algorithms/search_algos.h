#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdlib.h>
#include <stddef.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))

/**
 * struct listint_s - A singly linked list
 *
 * @n: An integer
 * @index: The index of the node in a list
 * @next: A pointer to the next node
 *
 * Description: A singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;


/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: An integer
 * @index: The index of a node in the list
 * @next: A pointer to the next node
 * @express: A pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
