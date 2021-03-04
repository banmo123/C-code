//求一个整数在内存中二进制1的个数
#include<stdio.h>

int main()
{
	int count = 0;
	int input = 0;
	int i = 0;
	printf("请输入一个整数：\n");
	scanf_s("%d", &input);
	/*while (input) 
	{
		if(1== input % 2)
		count++;
		input = input / 2;
	}*///存在其局限性如-1时错误
	for(i=0;i<32;i++)
	{ 
		if(((input >> i) & 1)==1)
			count++;	
	}
	printf("%d\n", count);
	return 0;
}