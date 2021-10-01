#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, last_dig;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
last_dig = (n % -10);
else
last_dig = (n % 10);
if (last_dig > 5)
printf("%s %d %s %d %s",
"Last digit of", n, "is", last_dig, "and is greater than 5\n");
else if (last_dig == 0)
printf("%s %d %s %d %s", "Last digit of", n, "is", last_dig, "and is 0\n");
else
printf("%s %d %s %d %s",
"Last digit of", n, "is", last_dig, "and is less than 6 and not 0\n");
return (0);
}
