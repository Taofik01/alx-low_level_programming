#include<stdio.h>
#include "main.h"
/**
 * main - print the name given with a new line
 *@argc: number of arguments
 * @argv: array of argument
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}	
