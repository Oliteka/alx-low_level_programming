#include "main.h"

/**
  * _isalpha - checks if letter is alphabetic.
  * @c: the character
  * Return: 1 if character is alphabet, 0, if not
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
