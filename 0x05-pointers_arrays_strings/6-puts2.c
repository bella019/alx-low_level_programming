#include "main.h"
/**
 * puts2 - function prints one chr out of a string
 * @str: char pointer
 * Return: 0;
 */
void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(*str);
			str++;
			count++;
		}
		else
		{
			str++;
			count++;
		}
	}
	_putchar('\n');
}
