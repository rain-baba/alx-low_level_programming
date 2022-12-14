#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 *
 * Return: ALways 0 (Success)
 *
 */

int main(void)
{
	float first, second, next;
	int c;

	first = 1;
	second = 2;
	c = 2;

	printf("%.f, %.f", first, second);
	while (c  < 98)
	{
		next = first + second;
		first = second;
		second = next;
		printf(", %.f", next);
		c++;
	}
	printf("\n");
	return (0);
}
