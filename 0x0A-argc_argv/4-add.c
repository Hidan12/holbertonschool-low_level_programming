#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * @argc: string size
 *
 * @argv: string
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, a, num, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (a = 0; argv[i][a] != '\0'; a++)
			{
				num = argv[i][a];
				if (!(num > 47 && num < 58))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
