#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns single integer numbers from 0 to 10
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
