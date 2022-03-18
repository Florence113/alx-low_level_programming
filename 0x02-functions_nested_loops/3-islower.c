#include "main.h"

/**
 * This function checks for lowercase letters and returns 1
 *
 * otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

	_putchar('\n');

}
