#include "main.h"
/**
 * more_numbers- prints numbers from 0 to 14 ten times
 * followed by new line
 * Return: 0 to 14 x 10 followed by new line
 */
void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (b <= 9)
	{
		while (a <= 14)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;
		}
		putchar('\n');
		b++;
		a = 0;
	}
}
