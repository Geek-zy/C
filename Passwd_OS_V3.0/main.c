
#include <stdio.h>
#include <stdlib.h>

#include "geek.h"

int main(int argc, char *argv[])
{
	if(system("rm Geek.out") == 0)
	  zy_G();

	else {

		system("clear");
		printf("\n请将名字改为\"Geek.out\"格式才可以执行！\n\n");
		exit(0);
	}

	return EXIT_SUCCESS;
}
