#include <stdio.h>
/**
 * main - Print sizes of various types
 *
 * Return: 0
 */
int main(void)
{
	char single_char;
	int integer;
	long int long_integer;
	long long int long_long_integer;
	float floating_points;

	printf("Size of a char: %d byte(s)\n", sizeof(single_char));
	printf("Size of an int: %d byte(s)\n", sizeof(integer));
	printf("Size of a long int: %d byte(s)\n", sizeof(long_integer));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long_long_integer));
	printf("Size of a float: %d byte(s)\n", sizeof(floating_points));

	return (0);
}
