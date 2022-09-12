#include <stdio.h>
/**
 * main- prints the numbers from 0 to 99
 * Return: 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 57 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
