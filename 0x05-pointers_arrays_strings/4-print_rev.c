#include "main.h"
/**
 * print_rev - function prints string in reverse order
 * @s: char ointer
 * Return: 0.
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int count = len - 1;

	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
/**
 * _strlen - function returns length of a string
 * @s: char pointer
 * Return: Length
 */
int _strlen(char *s)
{
	char *copy_s = s;
	int length = 0;

	while (*copy_s != '\0')
	{
		length++;
		copy_s++;
	}
	return (length);
}
