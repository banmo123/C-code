//�򵥼���pai��ֵ
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

////��д����Inverse��ʵ���ַ������е��ַ��������ŵĹ���
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
//	printf("������ʮλͬѧ�ĳɼ�:\n");
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