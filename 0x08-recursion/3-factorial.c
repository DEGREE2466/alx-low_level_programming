/*
 * File: 3-factorial.c
 * Auth: degree2466
 */

/**
 * factorial - returns the factorial of a given number
 * @n: the number to find the factorial of
 *
 * Return: if n > 0 - the factorial of n
 *	   if n < 0 - 1 to indicate the erro
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
