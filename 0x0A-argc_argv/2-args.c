#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != NULL; i++)
	{
		printf("%s \n". arrgv[i]);
	}
	return (0);
}