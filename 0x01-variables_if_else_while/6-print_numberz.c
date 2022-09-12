#include <stdio.h>
/**
 * main - prints nummbers in base 10 including 0
 * using putchar, followed by new line
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
