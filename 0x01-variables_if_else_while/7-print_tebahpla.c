#include <stdio.h>

/**
 * main - main print alphabet in reverse
 * folowed by a new line
 * Return: return 0 if it is success
 */
int main(void)
{
	char alp;
	
	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
