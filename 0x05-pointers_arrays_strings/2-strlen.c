#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of the passed string
 * @s: string to be supplied
 * Return: Length of spring
 */

int _strlen(char *s)
{
	int i = 0

	while (s[i] != '\0')
	{
		i++
	}

	return (i);
}
