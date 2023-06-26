#include "main.h"
/**
* _strlen - value of the string length
* @s: string
* return: length
*/
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
