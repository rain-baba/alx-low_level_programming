#include "main.h"

/**
 *  print_diagonal - function that draws a diagonal line on the terminal
 *  @n:parameter
 *
 *  Return:returns nothing
 */

void print_diagonal(int n)
{
	int replay, count;

	for (replay = 1; n > 0 && replay <= n; replay++)
	{
		for (count = 1; count <= replay; count++)
		{
			if (count == replay)
			{
				_putchar(92);
			}
			else
			{
				_putchar(32);
			}
	}
	_putchar('\n');
}
if (n <= 0)
	_putchar('\n');
	}

