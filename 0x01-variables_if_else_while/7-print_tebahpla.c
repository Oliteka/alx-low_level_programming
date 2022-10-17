#include <stdio.h>
/**
 * main - is the program entry point.
 * Return: 0 if succes, non-zero if error.
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');

	return (0);
}
