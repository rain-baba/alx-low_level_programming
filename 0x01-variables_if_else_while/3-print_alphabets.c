#include <stdlib.h>
#include <time.h>
/**
 * main - return  alphabets both lower and upper case
 *
 * Return: Always 0 (Success)
 *
 */
int main()
{
	char ch = 'a';
       	char CH = 'A';
       	 
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}

