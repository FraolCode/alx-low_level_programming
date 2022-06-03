#include <stdio.h>

/**
 * main - prints lowercase and uppercase alphabet
 * and then new line
 */
int main(void)
{

	int alp;
	
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (alp = 'A'; alp <= 'Z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
