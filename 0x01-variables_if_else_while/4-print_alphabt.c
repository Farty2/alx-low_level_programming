#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function that prints alphabet in lowercase esxept q and e
 *
 * Returns: Always 0 (Success)
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
