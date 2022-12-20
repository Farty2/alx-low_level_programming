#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the requested number items
 * from an array
 * @a: parameter 1
 * @n: parameter 2
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(",");
			printf(" ");
		}
	}
	printf('\n')
}
