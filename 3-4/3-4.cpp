//��һ���������ڴ��ж�����1�ĸ���
#include<stdio.h>

int main()
{
	int count = 0;
	int input = 0;
	int i = 0;
	printf("������һ��������\n");
	scanf_s("%d", &input);
	/*while (input) 
	{
		if(1== input % 2)
		count++;
		input = input / 2;
	}*///�������������-1ʱ����
	for(i=0;i<32;i++)
	{ 
		if(((input >> i) & 1)==1)
			count++;	
	}
	printf("%d\n", count);
	return 0;
}