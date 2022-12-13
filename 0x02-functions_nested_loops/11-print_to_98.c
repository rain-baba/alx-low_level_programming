#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from n to 98
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int stop = 98;
	int i = 0;
	
	if (n >= stop)
	{
		for (i = n; i >= stop; i--)
		{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
}
else
{
	for (i = n; i <= stop; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
}
printf("\n");
}



