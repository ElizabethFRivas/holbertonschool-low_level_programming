#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet
 *
 * Return: Always void.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if ( n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
		

		
}	
	
