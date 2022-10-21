#include <stdio.h>

void myStartupFun(void)__attribute__ ((constructor));

/**
 * hare - Prints a string before the
 * 	main function is executed.
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
