#include <stdio.h>
#include <stdlib.h>

/**
 * main - all lower case alphabets without e and q.
 *
 * Returns: Always 0 (Success)
 *
 */

int main(void)
{
	int ch;

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
