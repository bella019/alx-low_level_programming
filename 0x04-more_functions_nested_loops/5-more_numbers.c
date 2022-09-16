#include "main.h"
/**
 * more_numbers- prints numbers from 0 to 14 ten times
 * followed by new line
 * Return: 0 to 14 x 10 followed by new line
 */
void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
