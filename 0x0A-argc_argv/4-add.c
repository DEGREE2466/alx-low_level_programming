#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check string if their are integers
 * @str: array str
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*counts string*/
	{
		if (!isdigit(str[count])) /*checks if string there are digits*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}
