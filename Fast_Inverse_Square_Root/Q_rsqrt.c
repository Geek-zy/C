#include <stdio.h>

/*
 * 就现在所知，此算法最早由Gary Tarolli在SGI Indigo的开发中使用。虽说随后的相关研究也提出了一些可能的来源，但至今为止仍未能确切知晓此常数的起源。
 * 
 * 这个引擎的源代码里包括一个反平方倒数的算法，其速度要比标准的牛顿迭代法快上 4 倍，
 * 而其中的关键是一行神秘的代码和一个莫名其妙的数字：[ i = 0x5f3759df - ( i >> 1 ); // what the fuck? ] 。
 * 没有人知道Carmack是怎么发现这个数字的。普度大学的数学家Lomont觉得很好玩，决定要研究一下卡马克弄出来的这个猜测值有什么奥秘。
 * Lomont也是个牛人，在精心研究之后从理论上也推导出一个最佳猜测值，和卡马克的数字非常接近, 0x5f37642f。卡马克真牛，他是外星人吗？
 *
 * 传奇并没有在这里结束。Lomont计算出结果以后非常满意，于是拿自己计算出的起始值和卡马克的神秘数字做比赛，看看谁的数字能够更快更精确的求得平方根。
 * 结果是卡马克赢了... 谁也不知道卡马克是怎么找到这个数字的。最后Lomont怒了，采用暴力方法一个数字一个数字试过来，终于找到一个比卡马克数字要好上那么一丁点的数字，
 * 虽然实际上这两个数字所产生的结果非常近似，这个暴力得出的数字是0x5f375a86。
 *
 * Lomont为此写下一篇论文，"Fast Inverse Square Root"。
 *
 */

float Q_rsqrt( float number );


int main( void )
{
	printf("%f\n", Q_rsqrt(25));

	return 0;
}

float Q_rsqrt( float number )
{
	long i;
	float x2, y;
	const float threehalfs = 1.5F;

	x2 = number * 0.5F;
	y  = number;
	i  = * ( long * ) &y;                       // evil floating point bit level hacking
	i  = 0x5f3759df - ( i >> 1 );               // what the fuck?
	y  = * ( float * ) &i;
	y  = y * ( threehalfs - ( x2 * y * y ) );   // 1st iteration
//  y  = y * ( threehalfs - ( x2 * y * y ) );   // 2nd iteration, this can be removed

	return y;
}

