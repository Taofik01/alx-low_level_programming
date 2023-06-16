#include <stdlib.h>
#include <time.h>
/**
 * main - Determines if a number is negative, positive or zero.
 *
 *  betty style doc for function main goes there
 * Return: Always zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d number is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d number is negative\n", n);
}
return (0);
}
