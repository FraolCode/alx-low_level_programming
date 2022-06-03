#include <stdio.h>

/**
 * main - main print the reverse form of the
 * alphabet using putchar
 * Return: return 0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
