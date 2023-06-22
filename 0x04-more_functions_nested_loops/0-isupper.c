#include "main.h"

/**
 * main - entry point
 *
 *  _isupper - uppercase letters
 *  @c: char to check
 *
 *  Description: This function takes a character and checks if it is an
 *  uppercase letter in the ASCII character set. It returns 1 if the
 *  character is uppercase, and 0 otherwise.
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

