#include <stdio.h>

/**
 * main - returns possible combination of single-digit numbers from 0 to 9 seperated by comma and followed by space
 *
 * Returns: Always 0 (Success)
 *
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
