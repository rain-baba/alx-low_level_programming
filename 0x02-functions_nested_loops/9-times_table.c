#include "main.h"

/**
 *
 *  * times_table -prints tables
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

void times_table(void)

{

		int i, j, n, c;



			for (i = 0; i <= 9; i++)

					{

								c = 0;

										for (j = 0; j <= 9; j++)

													{

																	n = i * j;

																				if (n <= 9 && i * (j + 1) <= 9)

																								{

																													_putchar(n + '0');

																																	if (c != 9)

																																						{

																																												_putchar(',');

																																																	_putchar(' ');

																																																						_putchar(' ');

																																																										}

																																				}

																							else

																											{

																																if (n / 10 == 0)

																																					{

																																											_putchar(n + '0');

																																															}

																																				else

																																									{

																																															_putchar((n / 10) + '0');

																																																				_putchar((n % 10) + '0');

																																																								}

																																								if (c != 9)

																																													{

																																																			_putchar(',');

																																																								_putchar(' ');

																																																												}

																																											}

																										c++;

																												}

												_putchar('\n');

													}

}
