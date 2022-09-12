#include <stdio.h>
/**
 * main - prints all possible different combination of three digit number
 * Return: 0 (success)
 */
int main(void)
{
	int n, m, p;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; n < 58; m++)
		{
			for (p = 50; p < 58; p++)
			{
				if (p > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(1);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
