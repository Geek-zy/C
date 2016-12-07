
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "geek.h"

int zy_0(void)
{

ZY1:	
	system("clear");

	printf("是否要退出本加密系统！！！\n\n");
	printf("1.是\t2.否\n");	
	scanf("%d", &a);

	if(a == 1) {

		system("clear");

		printf("感谢您使用本加密软件！！！\n");
		exit(0);
	}

	else if(a == 2)
	  zy();

	else {

		system("clear");

		printf("您输入有误，请重新输入！\n");
		sleep(3);
		goto ZY1;
	}

	return EXIT_SUCCESS;
}
