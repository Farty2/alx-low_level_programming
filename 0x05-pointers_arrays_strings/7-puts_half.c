#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: provided string
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (length >= 0)
	{
		if (str[length] == '\0')
			break;
		length++;
	}
	if (length % 2 == 1)
		i = length / 2;
	else
		i = (length - 1) / 2;
	for (i++; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
