
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "geek.h"

int zy(void) 
{	
	system("clear");

	printf(
				"\n ★ 主 菜 单\n\n"
				"1.设 定 密 码\n\n"
				"2.修 改 密 码\n\n"
				"3.删 除 密 码\n\n"
				"4.查 看 密 码\n\n"
				"5.鸣 谢 作 者\n\n"
				"0.退 出 程 序\n\n"
		  );

	scanf("%d", &a);

	if(a == 1)
	  zy_1();

	else if(a == 2)
	  zy_2();

	else if(a == 3)
	  zy_3();

	else if(a == 4)
	  zy_4();

	else if(a == 5)
	  zy_5();

	else if(a == 0)
	  zy_0();

	else {

		system("clear");
		printf("您输入有误，请重新输入!\n");
		sleep(3);
		zy();
	}

	return EXIT_SUCCESS;
}
