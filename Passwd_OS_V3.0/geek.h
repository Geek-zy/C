
/*
 *	全局变量
 */

char password[33];		//定义密码数组
char password_NULL[33];	//密码设置为空 #修改和删除函数要用到
int  a;					//定义按键变量

/*
 *	加密系统所有的函数，在此申明。
 */

int zy  (void);			//菜单函数
int zy_G(void);			//界面函数
int zy_1(void);			//设定密码函数
int zy_2(void);			//修改密码函数
int zy_3(void);			//删除密码函数
int zy_4(void);			//查看密码函数
int zy_5(void);			//鸣谢作者
int zy_0(void);			//退出函数
