#include "main.h"

/**
 * _isupper - define if a character is uppercase
 * @c: Character to be tested
 *
 * Return: 1 if uppercase else 0 (False)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
