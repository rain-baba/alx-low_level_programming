#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int r;

	print_last_digit(98);
       r = print_last_digit(-1024);
       print_last_digit(0);
        _putchar('0' + r);
	_putchar('\n');
	 return (0);
}

