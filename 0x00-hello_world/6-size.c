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

	printf("Size of a char: %c bytes(s)", sizeof(single_char));
	printf("Size of a int: %d bytes(s)", sizeof(integer));
	printf("Size of a long int: %d bytes(s)", sizeof(long_integer));
	printf("Size of a long long int: %d bytes(s)", sizeof(long_long_integer));
	printf("Size of a float: %f bytes(s)", sizeof(floating_points));

	return (0);
}
