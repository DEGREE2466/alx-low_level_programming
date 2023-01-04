/*
 * File: 0-puts_recursion.c
 * Auth: Degree2466
 */

#include "main.h"

/**
 * _puts_recursion - prints a strings, followed by a new line
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
