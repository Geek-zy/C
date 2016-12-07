
#include <stdio.h>	
#include <stdlib.h>	
#include <unistd.h>

#include "geek.h"

int zy_5(void)
{ 
	system("clear");

	printf(
				"软件名称：加密系统\n"
				"版    本：V3.0\n"
				"作    者：张懿\n"
				"创作时间：2013.05.01	12:00:00\n"
				"最后修改：2013.10.15	09:16:44\n"	
				"联系方式：zy251021@163.com\n"
		  );

	printf("\n0.返  回\n\n");
	scanf("%d", &a);

	if(a == 0)
	  zy();	

	else {

		system("clear");
		printf("您输入有误，请重新输入！\n");
		sleep (3);	
		zy_5();
	}

	return EXIT_SUCCESS;
}
