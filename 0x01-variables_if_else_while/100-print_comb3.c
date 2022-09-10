#include <stdio.h>

/**
 * main - This function prints out a to z except q and e.
 * Return: 0
 */
int main(void)
{
	int n;
	int a;

	for (n = '0'; n <= '8'; n++)
	{
		for (a = '0'; a <= '9'; a++)
		{
		if (!(a == n || a < n))
		{
			putchar(n);
			putchar(a);
			if (!(n == '8' && a == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
