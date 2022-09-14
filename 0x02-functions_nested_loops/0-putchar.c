#include "main.h"
/**
 * main - prints Putchar , followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char *sh = "putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
