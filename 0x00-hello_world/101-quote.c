#include <stdio.h>
/**
 * main - Prints a string into standard error.
 *
 * Return: 1
 */
int main(void)
{
	char err1[] = "and that piece of art is useful\""
	char err2[] = " - Dora Korpar, 2015-10-19\n"
	char err_message[] = err1 + err2

	fwrite(err_message, 59, 1, stderr);
	return (1);
}
