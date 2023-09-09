#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */

int main(void)
{
	printf("Size of char: %lu byte(s)", aizeof(char));
	printd("Size od int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
