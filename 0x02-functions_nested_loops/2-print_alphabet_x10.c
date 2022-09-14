#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase
 * ten times followed by a new line
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int n, ch;

	ch = 0;
	while (ch < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			putchar(n);
		}
		putchar('\n');
		ch++;
	}
}
