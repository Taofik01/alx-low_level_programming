#include "main.h"
/**
*_memset - filling the memory block with a specific value
*@s: starting address of memory to be filled
*@b: the desired value
*@n: number of bytes to be changed
*
* Return: Always 0
*/

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
}
return (s);
}
