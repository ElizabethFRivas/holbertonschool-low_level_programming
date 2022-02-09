#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet
 *
 * Return: Always void.
 */

void print_alphabet_x10(void)
{
	int  inicio = 97;

	int cnt = 0;

	while (cnt < 10)
	{
		inicio = 97;

		while (inicio < 123)
		{
			_putchar(inicio);
			inicio = inicio + 1;
		}
		_putchar('\n');
		cnt++;
	}
}
