#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function that returns alphabet in both lowercase and uppercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
