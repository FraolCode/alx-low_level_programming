#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: return
 */
int main(void)
{
	int fnum, snum, tnum;

	for (fnum = 48; fnum < 58; fnum++)
	{
		for (snum = 48; snum < 58; snum++)
		{
			if (snum > fnum)
			{
				for (tnum = 48; tnum < 58, tnum++)
				{
					if(tnum > snum)
					{
						putchar(fnum);
						putchar(snum);
						putchar(tnum);
						if (fnum >= 55)
						{
							break;
						}
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	puchar('\n');
	return (0);
}
