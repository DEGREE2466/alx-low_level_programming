#include "main.h"
/**
 * _sqrt_recursion - evaluates sqrt
 * @n: integer
 * Return: sqrt_recursion
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0) /*if n is negative*/
		return (-1);

	else
	{
		return (_evaluate(i, n)); /*Recursive call*/
	}
}
