#include <stdio.h>

/**
  * beforemain - function executed before of the main
  */

void __attribute__ ((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
