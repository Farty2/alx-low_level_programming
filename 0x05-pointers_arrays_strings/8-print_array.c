#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the requested number items
 * from an array
 * @a: parameter 1
 * @n: parameter 2
 * Return: Void
 */

void print_array(int *a, int n)
{
	int x;

	for (; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(", ");
	}
	putchar('\n');
}
