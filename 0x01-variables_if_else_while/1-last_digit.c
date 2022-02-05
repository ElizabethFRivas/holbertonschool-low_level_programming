#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: "\"Programming is like"
 *
 * Return: Always 0 (two success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
	printf("and is greater than 5\n");
	if (n % 10 == 0)
	printf("and is 0\n");
	if (n % 10 < 6 && n % 10 != 0)
	printf("and is less than 6 and not 0\n");

	return (0);
}
