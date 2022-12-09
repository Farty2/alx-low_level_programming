#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function returns alphabets
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}

