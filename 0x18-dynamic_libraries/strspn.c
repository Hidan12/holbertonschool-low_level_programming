#include "main.h"
/**
 * _strspn - character count
 *
 * @s: string
 *
 * @accept: character
 *
 * Return: the number of bytes in the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, sum;

	sum = 0;
	for (; *s != '\0'; s++)
	{
		if ((*s <= 90 && *s >= 65) || (*s <= 122 && *s >= 97))
		{
			for (a = 0; accept[a] != '\0'; a++)
			{
				if (*s == accept[a])
					sum++;
				
			}
			
		}
		else
			break;
	}
	return (sum);
}
