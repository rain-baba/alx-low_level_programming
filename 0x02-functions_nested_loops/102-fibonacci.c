#include <stdio.h>

/**
 * main - prints out first 50
 * fibonacci suit numbers
 *
 * Return: return 0
 */

int main(void)
{
	unsigned long first, second, c, next;

	first = 1;
	second = 2;
	c = 2;

	printf("%lu, %lu", first, second);
	while (c  < 50)
	{
		next = first + second;
		first = second;
		second = next;
		printf(", %lu", next);
		c++;
	}
	printf("\n");
	return (0);
}
