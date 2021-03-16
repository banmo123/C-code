////写一个代码，判断一个整型在计算机中是大端储存还是小端储存
//#include<stdio.h>
//
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u", a);//此处计算机直接将a当作无符号数处理
//	return 0;
//}
//
//int main()
//{
//	char a = 128;
//	printf("%u", a);//此处计算机直接将a当作无符号数处理
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int sum = 0;
//	int j = 1;
//	scanf_s("%d", &a);
//	for (i = 0; i < 32; i++)
//	{
//		if ((a & 1) == 1)
//		{
//			sum += j;
//		}
//		j *= 2;
//		a /= 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;//这个函数会陷入死循环，因为i始终都会是无符号数，不会


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//
//	}
//	printf("%d", strlen(a));//strlen函数看到"\0"即会结束计算字符串的大小，这里a数值对应ASCII表中的'\0'正是数字零
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)//无符号数的i永远小于等于255
//	{
//
//		printf("hello\n");
//	}
//	return 0;
//}