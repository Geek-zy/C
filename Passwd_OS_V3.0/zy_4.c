
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "geek.h"

int zy_4(void)
{

ZY1:	
	system("clear");

	printf("\n您设定的密码是：%s\n\n\n", password);	
	printf("密码查看成功，是否返回主菜单？\n\n");
	printf("1.是\t2.否\n");	
	scanf("%d", &a);

	if(a == 1)	
	  zy();	

	else if(a == 2) {

		system("clear");
		printf("感谢您使用本加密软件！！！\n");
		exit(0);
	}

	else {

		system("clear");

		printf("您输入有误，请重新输入！\n");
		sleep(3);
		goto ZY1;
	}

	return EXIT_SUCCESS;
}
