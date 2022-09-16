#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by new line
 * but for ultiples of three prints fizz instead of the number
 * and for multiples of five prints buzz
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
			printf("Fizz");
		else if (num % 5 == 0 && num % 3 != 0)
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
		{
			printf("%d", num);
		}
		if (num < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
