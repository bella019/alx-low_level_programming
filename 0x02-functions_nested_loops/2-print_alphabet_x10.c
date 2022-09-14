#include "main.h"
/**
 * main - prints alphabet in lowercase ten times followed by a new line
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int n, co;
	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
