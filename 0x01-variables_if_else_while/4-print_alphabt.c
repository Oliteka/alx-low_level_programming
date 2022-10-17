#include <stdio.h>
/**
 * main-program entry point.
 * Return:0 if no error, non zero if error.
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
	}

	putchar('\n');

	return (0);
}
