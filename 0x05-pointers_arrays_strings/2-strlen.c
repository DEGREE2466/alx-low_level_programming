#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int p = o;
	/ increment up to when the last character is NULL, \0 /
		while (*(s + p) != 0)
		{
			p++;
		}
	return (p);
}
