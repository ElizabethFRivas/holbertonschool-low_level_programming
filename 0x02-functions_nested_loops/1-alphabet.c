#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always void.
 */

void print_alphabet(void)
{
	int  inicio = 97;

	while (inicio < 123)
	{
		_putchar(inicio);
		inicio = inicio + 1;

	}
	_putchar('\n');
}
