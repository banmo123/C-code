////дһ�����룬�ж�һ�������ڼ�������Ǵ�˴��滹��С�˴���
//#include<stdio.h>
//
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
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
//	printf("%u", a);//�˴������ֱ�ӽ�a�����޷���������
//	return 0;
//}
//
//int main()
//{
//	char a = 128;
//	printf("%u", a);//�˴������ֱ�ӽ�a�����޷���������
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
//	return 0;//���������������ѭ������Ϊiʼ�ն������޷�����������


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
//	printf("%d", strlen(a));//strlen��������"\0"������������ַ����Ĵ�С������a��ֵ��ӦASCII���е�'\0'����������
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)//�޷�������i��ԶС�ڵ���255
//	{
//
//		printf("hello\n");
//	}
//	return 0;
//}