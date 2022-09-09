#include <stdio.h>

/**
 * main - This function prints out a to z except q and e.
 * Return: 0
 */
int main(void)
{
	int n;

	n = '0';
	putchar(n);
	for (n = '1'; n <= '9'; n++)
	{
		putchar(',');
		putchar(' ');
		putchar(n);
	}
	return (0);
}
