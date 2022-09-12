#include <stdio.h>
/**
 * main - prints alphabets in lowercase but in reverse order
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; (ch = 'a'); ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
