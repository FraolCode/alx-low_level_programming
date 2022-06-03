#include <stdio.h>

/**
 * main - print single digit numbers using
 * putchar
 * Return: return 0 if it is success
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
