#include <stdio.h>
/**
 * main - is the program entry point.
 * Return: 0 if success and non zero if error.
 */

int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i <= 15; i++)
	putchar(hexvalues[i]);
	putchar('\n');

	return (0);
}
