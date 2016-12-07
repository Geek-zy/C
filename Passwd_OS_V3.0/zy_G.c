
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "geek.h"

int zy_G(void)
{	
	system("clear");

	printf("\n\t                ★ 欢迎使用本加密系统软件                \n");	sleep(1);
	printf("\t                  ╭══════════════════╮                    \n");	sleep(1);
	printf("\t╭═════════════════┤◎   物联工作室   ◎├═══════════════════╮\n");	sleep(1);
	printf("\t║                 ╰══════════════════╯                   ║\n");	sleep(1);
	printf("\t║ ▓ 黑客技术  ▓ 木马病毒   ▓ 黑客软件  ▓ 学习教程        ║\n");	sleep(1);
	printf("\t║--------------------------------------------------------║\n");	sleep(1);
	printf("\t║☆ 本工作室软件系统协议:                                 ║\n");	sleep(1);
	printf("\t║                                                        ║\n");	sleep(1);
	printf("\t║1.本工作室的软件会不定时更新，提供最牛X的黑客软件资源。 ║\n");	sleep(1);
	printf("\t║2.所有软件资源如无特殊说明，均为永久免费可用版。        ║\n");	sleep(1);
	printf("\t║3.任何人不得利用本软件系统作为商业用途或其他违法行为。  ║\n");	sleep(1);
	printf("\t║4.感谢您光顾本工作室，我们将竭诚为你提供最优秀的黑软。  ║\n");	sleep(1);
	printf("\t║5.本软件作者：张懿                                      ║\n");	sleep(1);
	printf("\t║6.本软件版本：V3.0                                      ║\n");	sleep(1);
	printf("\t║7.联系我们：zy251021@163.com                            ║\n");	sleep(1);
	printf("\t║          ╭──────────────────────────────────╮          ║\n");	sleep(1);
	printf("\t╰══════════┤★★★  中国最具潜力的黑软集散地！★★★├══════════╯\n");	sleep(1);	
	printf("\t           ╰──────────────────────────────────╯           \n");	sleep(3);

	printf("是否接受本协议并且进入本加密系统？\n\n");
	printf("1.是\t2.否\n");
	scanf("%d", &a);

	if(a == 1)	
	  zy();	

	else if(a == 2) {

		system("clear");

		printf("感谢您使用本加密系统软件！！！\n");
		exit(0);
	}

	else {

		system("clear");

		printf("您输入有误，请重新输入！\n");
		sleep(3);
		zy_G();
	}

	return EXIT_SUCCESS;
}
