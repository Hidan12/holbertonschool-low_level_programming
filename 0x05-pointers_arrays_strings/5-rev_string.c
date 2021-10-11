#include "main.h"
/**
 * rev_string - print
 * @str: char
 */
void rev_string(char *str)
{
	int a, b, mit;
	char sus;

	for (a = 0; str[a] != '\0'; a++)
		continue;
	a--;
	if (a / 2 != 0)
		mit = (a + 1) / 2;
	else
		mit = (a / 2);
	for (b = 0; b < a; b++)
	{
		if (b < mit)
		{
			sus = str[b];
			str[b] = str[(a - b)];
			str[(a - b)] = sus;
		}
		else
			break;
	}
}
