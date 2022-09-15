#include "main.h"
/**
 * print_diagonal - draws  diagonal line across the terminal
 * @n: number of times \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 1; i < n; i++)
		{
			for (j = 1; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
