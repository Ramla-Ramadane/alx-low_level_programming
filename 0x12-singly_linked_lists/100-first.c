#include <stdio.h>

/**
 * before - function that prints before the main
 * Return: void
 */
void before(void) __attribute__((constructor));
void before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
