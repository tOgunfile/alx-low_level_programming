#include <stdio.h>

/**
 * main - This function prints out a to z.
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
