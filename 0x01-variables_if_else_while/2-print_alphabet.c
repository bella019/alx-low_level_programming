#include <stdio.h>
/**
 * main- prints the alphabets in lower case,
 * followed by a new empty line
 * Return: 0 (sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
