#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 * Return: return if it succuss
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
