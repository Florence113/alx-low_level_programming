#include "main.h"

/*
 * This function is going to check for
 * alphabet either upper or lower, it
 * doesnt matter
 */

/**
 * _isalpha - this is a function
 * @c: this is the character to be checked
 * Return: 1 if true otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);

}
