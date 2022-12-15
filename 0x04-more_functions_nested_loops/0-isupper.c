#include "main.h"
/**
 * _isupper - checks if parameter is an uppercase
 * @c: input character
 * Return: 1 if its an upper case character, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
