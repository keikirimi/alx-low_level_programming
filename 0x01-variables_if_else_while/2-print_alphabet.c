#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabets
 *Description: Geta random it with 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}	
