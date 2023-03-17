#include <stdio.h>

/**
 * main - Prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putcher(alp[i]);
	}
	putcher('\n');
	return (0);
}
