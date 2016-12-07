
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "geek.h"

int zy_1(void)
{	
	char password_1[33];

	if(strcmp(password,password_NULL)==0) {

		system("clear");	

		printf("请输入密码，按Enter确认！<密码长度不能超过32位！>\n");
		scanf("%s",password_1);
		strcpy(password,password_1);

ZY1:	
		system("clear");

		printf("密码设定成功，是否返回主菜单？\n\n");
		printf("1.是\t2.否\n");	
		scanf("%d",&a);

		if(a == 1)	
		  zy();

		else if(a==2) {

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
	}

	else {

ZY2:	
		system("clear");

		printf("您已经设定密码！是否返回主菜单？\n\n");
		printf("1.是\t2.否\n");	
		scanf("%d",&a);

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
			goto ZY2;
		}		
	}

	return EXIT_SUCCESS;
}
