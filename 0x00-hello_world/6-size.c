#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: "\"Programming is like building a multilingual puzzle"
 *
 * Return: Always 0 (two success)
 */

int main(void)
{
        char letter1;
	int n2;
	long int n3;
	long long int n4;
	float n5;
	
	printf("Size of a char:%d byte(s)\n")sizeof(letter1);
	printf("Size of a int:%d byte(s)\n")sizeof(n2);
	printf("Size of a long:%d byte(s)\n")sizeof(n3);
	printf("Size of a long long int:%d byte(s)\n")sizeof(n4);
	printf("Size of a float:%d byte(s)\n")sizeof(n5);

	return (0);
}
