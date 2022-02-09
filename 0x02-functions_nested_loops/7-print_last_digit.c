#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @n: integer
 * Return: Always void.
 */

int print_last_digit(int n)
{
	unsigned int number;

	if (n < 0)
		number = n * -1;
	else
		number = n;

	_putchar((number % 10) + 48);
	return (number % 10);
}
