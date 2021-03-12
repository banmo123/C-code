//简单计算pai的值
//#include<stdio.h>
//int main()
//{
//	float pai = 1;
//	int i = 0;
//	for (i = 0; i < 100; i+=2)
//	{
//		pai =pai*(i + 2) / (i + 1);
//		pai=pai * (i + 2) / (i + 3);
//	}
//	printf("%f\n", 2*pai);
//	return 0;
//}

////编写函数Inverse，实现字符数组中的字符串逆序存放的功能
//#include<stdio.h>
//#include<string.h>
//
//void Inverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	int temp = '0';
//	while (left < right)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "adskhdjfh";
//	printf("%s\n",arr);
//	Inverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}

//# include<stdio.h>
//int FindAver(int score[], int n, int* pAver)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += score[i];
//		
//	}
//	
//	
//	
//	return (sum/10);
//
//}
//
//int main()
//{
//	printf("请输入十位同学的成绩:\n");
//	int i = 0;
//	int n = 10;
//	int score[10] = { 0 };
//	int up[] = {0};
//	for (i = 0; i < 10; i++)
//	{ 
//		scanf_s("%d", &score[i]);
//	}
//	printf("%d\n",FindAver( score, n, up));
//	for (i = 0; i < 10; i++)
//	{
//		
//		if (score[i] > FindAver(score, n, up))
//		{
//		
//			printf("%d\n", score[i]);
//		}
//	}
//	return 0;
//}