#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');

}
