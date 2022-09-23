#include "main.h"
/**
 * string_toupper - changers all lowercse letters of string to uppercase
 * @str: string to be changed
 * Return: char *
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
