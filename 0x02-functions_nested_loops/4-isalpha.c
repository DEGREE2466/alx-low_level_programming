#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: character to be checked
 *
 * Returns: 1 if the character is a letter, 0 if otherwise
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
