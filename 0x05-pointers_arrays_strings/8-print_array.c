#include "main.h"
#include <stdio.h>
/**
 * print_arrat - function prints n elements of  int array
 * @a: char point
 * @n: interger
 * Return: 0
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		if (count == (n - 1))
		{
			printf("%d", *a);
			a++;
			count++;
		}
		else
		{
			printf("%d, ", *a);
			a++;
			count++;
		}
	}
	putchar('\n');
}
