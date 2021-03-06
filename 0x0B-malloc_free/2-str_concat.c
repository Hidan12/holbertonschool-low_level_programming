#include "main.h"
/**
 * *str_concat - copy array
 *
 * @s1: string
 *
 * @s2: string
 *
 * Return: Pointer.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int a, b, size_s1, size_s2, sizee;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 != NULL)
	{
		for (size_s1 = 0; s1[size_s1] != '\0'; size_s1++)
			continue;
		for (size_s2 = 0; s2[size_s2] != '\0'; size_s2++)
			continue;
		sizee = size_s1 + size_s2;
		ptr = malloc((sizee + 1) * sizeof(char));
		if (ptr == NULL)
			return ('\0');
		for (a = 0; a < size_s1; a++)
			ptr[a] = s1[a];
		for (b = 0; b < size_s2; b++)
			ptr[(a + b)] = s2[b];
		ptr[(b + a) + 1] = '\0';
		return (ptr);
	}
	return ('\0');
}
