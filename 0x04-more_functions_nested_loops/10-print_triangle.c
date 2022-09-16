#include "main.h"
/**
 * print_triangle - prints a triangle followed by new line
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size; y > x; y--)
			{
				_putchar(' ');
			}
			for (z = 0; z < x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchaar('\n');
}
