#include <stdio.h>
/**
 * main - prints all possible outcomes of two two digit number
 * Return: 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <=98; i++)
	{
		for (j = i+1; j <= 99; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i == 98 && j == 99)
				continue;
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
