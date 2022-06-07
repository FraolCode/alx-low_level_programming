Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@FraolCode 
calebapril
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
alx-low_level_programming/0x02-functions_nested_loops/11-print_to_98.c
@calebapril
calebapril 11 commit
Latest commit 9500e78 on 15 Mar
 History
 1 contributor
Executable File  32 lines (30 sloc)  383 Bytes
   
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * Description: prints all natural number from n - 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
