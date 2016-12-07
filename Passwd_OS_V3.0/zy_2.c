
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "geek.h"

int zy_2(void)
{

	char password_1[33], password_2[33], password_3[33];

	system("clear");

	printf("请输入原密码！\n");
	scanf("%s", password_1);

	if(strcmp(password, password_1) != 0) {

ZY1:		
		system("clear");

		printf("您输入原密码有误，是否重新输？\n\n");
		printf("1.是\t2.否\n");	
		scanf("%d",&a);

		if(a == 1)	
		  zy_2();

		else if(a == 2) {

			system("clear");
			zy();
		}

		else {

			system("clear");

			printf("您输入有误，请重新输入！\n");
			sleep(3);
			goto ZY1;
		}
	}

	else	

	  system("clear");

	printf("请输入新密码！\n");
	scanf("%s",password_2);

	system("clear");
	printf("请在输入一次新密码！\n");
	scanf("%s",password_3);

	if(strcmp(password_2, password_3) != 0) {

ZY2:					
		system("clear");

		printf("两次输入有误，是否返回本菜单重新输入！\n\n");
		printf("1.是\t2.否\n");	
		scanf("%d",&a);

		if(a==1)	
		  zy_2();

		else if(a==2) {

			system("clear");
			zy();
		}

		else {

			system("clear");
			printf("您输入有误，请重新输入！\n");
			sleep(3);
			goto ZY2;
		}
	}

	else
	  strcpy(password, password_3);	

ZY3:	
	system("clear");

	printf("密码修改成功，是否返回主菜单？\n\n");
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
		goto ZY3;
	}

	return EXIT_SUCCESS;
}
