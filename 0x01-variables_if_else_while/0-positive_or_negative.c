#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: "\"Programming is like building a multilingual puzzle"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n; 
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive",n);
	if (n == 0)
		printf("%d is zero",n);
	if (n < 0)
		printf("%d is negative",n);
	
	return (0); 
}
