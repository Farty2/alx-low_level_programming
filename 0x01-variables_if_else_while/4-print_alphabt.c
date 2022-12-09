#include <stdio.h>
#include <stdlib.h>

/**
 * main - all lowercase alphabets except q and e
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
