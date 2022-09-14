#ifndef MAIN_H
#define MAIN_H

#include "main.h"
/**
 * main - prints Putchar , followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char *sh = "putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	putchar('\n);
	return (0);
}
