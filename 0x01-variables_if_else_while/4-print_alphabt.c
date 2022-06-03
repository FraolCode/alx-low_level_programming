#include <stdio.h>

/**
 * main - prints lowercase alphabet
 * except e and q
 * Return: return 0 if it is success
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'e' && alp != 'q')
		{
			putchar(alp);
		}
	}
	putchar('\n');
	return (0);
}
