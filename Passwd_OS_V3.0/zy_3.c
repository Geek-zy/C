
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "geek.h"


int zy_3(void)
{

ZY1:	
	system("clear");

	printf("您是否要删除密码？\n\n");
	printf("1.是\t2.否\n");	
	scanf("%d", &a);

	if(a==1)		
	  strcpy(password, password_NULL);

	else if(a==2) 
	  zy();

	else {

		system("clear");

		printf("您输入有误，请重新输入！\n");
		sleep(3);
		goto ZY1;
	}

ZY2:	
	system("clear");

	printf("\n密码删除成功，是否返回主菜单？\n\n");
	printf("1.是\t2.否\n");	
	scanf("%d", &a);

	if(a == 1) {

		zy();	
		printf("感谢您使用本加密软件！！！\n");
		exit(0);
	}

	else {

		system("clear");

		printf("您输入有误，请重新输入！\n");
		sleep(3);
		goto ZY2;
	}

	return EXIT_SUCCESS;
}
