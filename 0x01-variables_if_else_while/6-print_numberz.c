#include <stdio.h>
/**
 * main - is the program entry point.
 * Return: 0 if success and non zero if error.
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
