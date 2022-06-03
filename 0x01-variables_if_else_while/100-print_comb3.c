#include <stdio.h>

/**
 * main - main
 * Return: return
 */
int main(void)
{
	int fnum,snum;

	for (fnum = 48; fnum < 58; fnum++)
	{
		for (snum = 48; snum < 58; snum++)
		{
			if(fnum != snum && fnum < snum)
			{
				putchar(fnum);
				putchar(snum);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
