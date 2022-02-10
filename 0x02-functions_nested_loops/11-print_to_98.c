#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Write a function that prints the last digit of a number
 * @n: integer
 * Return: Always void.
 */

void print_to_98(int n)
{
	int a = 0;

	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (a == 1)
				printf(", ");
			printf("%d", n);
			a = 1;

		}
		putchar('\n');
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (a == 1)
				printf(", ");
			printf("%d", n);
			a = 1;


		}
		putchar('\n');

	}
	else
		printf("%d\n", n);
}
