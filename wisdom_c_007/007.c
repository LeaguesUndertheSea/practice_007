//#include <stdio.h>
//#include <stdint.h>
//#include <stdbool.h>
//#include <inttypes.h>
//
//int main(void)
//{
//
//	/*
//		自动贩卖机
//
//		这个机器只支持投币，假设只卖一种饮料，每瓶价格是$5.
//
//		怎么样才能给用户饮料呢？
//
//		用户需要一直投币，直到金额足够，这样机器才可以提供饮料
//
//		增加一个条件，只接受1,2,5元的币种
//	*/
//
//	// 1.初始化
//
//	const uint32_t PRICE = 5;		// 饮料的价格    常量
//									
//	uint32_t balance = 0;			// 用户当前的金额（当前投入的总数）->迭代
//
//	uint32_t coin;					// 计次迭代使用的变量
//
//	//提示语
//	puts("欢迎使用自动贩卖机！本机器只提供一种饮料，价格为￥5.");
//	puts("请投币 （只接受1、2、5元三种硬币）： ");
//
//	//2.处理循环的条件
//	//什么情况下会一直投币？只要钱不够，就要一直投
//	//balance < PRICE
//	while (balance < PRICE) {
//		puts("钱不够，请投币：");
//
//		//模拟投币，假设用户输入的金额就是投币
//		scanf_s("%" PRIu32, &coin);
//
//		//检查每次投币是否有效 1, 2, 5
//		if (coin == 1 || coin ==2 || coin == 5) {
//			balance += coin;
//			printf("您已经投入了 $%" PRIu32 "\n", balance);
//		}
//		else {
//			printf("对不起，我们不接受 $%" PRIu32 "的硬币\n", coin);
//		}
//	}
//	// 找零
//
//	if (balance > PRICE) {
//		printf("请收好找零 %" PRIu32 "\n", balance - PRICE);
//	}
//
//	puts("谢谢惠顾，请取走您的饮料！");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{	
//	/*
//		用户从终端输入一系列数字，用回车隔开，指导用户输入一个单个0作为结束，
//		然后把所有的书相加，最终计算结果
//	*/
//
//	uint32_t sum = 0;	// 初始化数字和是0
//						// 每一次用户输入的数字
//	uint32_t number;
//
//	puts("请输入一系列数字，用回车隔开，我们将计算他们的和，输入零结束。");
//
//	while (true) {
//		
//		puts("请输入一个数字"); 
//
//		// scanf重新赋值，从输入的地方重新给number赋值
//		scanf_s("%" PRIu32,&number);
//
//		if (number == 0) {
//			break;
//		}
//
//		sum += number;
//	}
//
//	printf("所求的和为sum是 %" PRIu32 "\n", sum);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main(void)
//{
//	/*
//		用户从终端输入一系列数字，用回车隔开，指导用户输入一个单个0作为结束，
//		然后把所有的书相加，最终计算结果。（0-9）
//	*/
//
//	uint32_t sum = 0;	// 初始化数字和是0
//	// 每一次用户输入的数字
//	char input;			// 每一次用户输入的字符，我会将字符转化成int
//
//	puts("请输入一系列数字（0-9），用回车隔开，我们将计算他们的和，输入零结束。");
//
//	while (true) {
//
//		puts("请输入一个数字或者q退出");
//
//		// scanf重新赋值，从输入的地方重新给number赋值
//		scanf_s(" %c",&input, 1);
//
//		if (input == 'q')
//		{
//			break;
//		}
//		// 将输入的字符转华为数字，并且加到总和sum之中
//		// '0' ASCII 48,'0'-'9' 连续的
//		if (input >= '0' && input <= '9') 
//		{
//			sum += input - '0';
//		}
//		else 
//		{
//			printf("无效输入，请输入一个数字或'q'\n");
//		}
//	}
//
//	printf("所求的和为sum是 %" PRIu32 "\n", sum);
//
//	return 0;
//}