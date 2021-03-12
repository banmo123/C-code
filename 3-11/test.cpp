////计算一个数的二进制中一的个数
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	int count = 0;
//	printf_s("输入数字：\n");
//	scanf_s("%d", &input);
//	if (input >= 0)
//	{
//		while (input)
//		{
//			if ((input & 1) == 1)
//			{
//				count++;
//			}
//			input = input >> 1;//编译器采用算数右移，左边补的是符号位，对负数的计算是错误的
//		}
//	}
//	//else
//	//{
//	//	while (input)
//	//	{
//	//		input = input & (input - 1);//非常神奇的算法！使二进制最右边的 1 消失
//	//		count++;
//	//	}
//	//	input = input >> 1;
//	//}
//	printf_s("%d", count);
//	return 0;
//}


////使用递归的方法实现字符串的逆序
//#include<stdio.h>
//#include<string.h>
//void reverse(char arr[])
//{
//	int len = strlen(arr);
//	
//	int temp = arr[0];
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(strlen(arr)>=2)
//		reverse(arr + 1);
//	arr[len - 1] = temp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////用递归的方式实现n的k次方
//#include<stdio.h>
//int math(int n, int k)
//{
//	if (k>0)
//	{
//		return math(n, k - 1) * n;
//	}
//	else if(k==0)
//	{
//		return 1;
//	}
//	else
//		return math(1/n,k);
//}
//int main()
//{
//
//	int n = 0;
//	int k = 0;
//	scanf_s("%d%d", &n,&k);
//	printf("%d\n",math(n, k));
//	return 0;
//}
#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target)
{
    int i = 0;
    int* result = NULL;
    for (i = 0; i < numsSize; i++)
    {
        int j = 0;
        for (j = 0; j > i; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                *result = i;

                *(result + 1) = j;
                return result;
            }
        }
    }
    return result;
}
int main()
{
    int nums[] = { 1,2,3,4 };
    int numsSize = 4;
    int target = 7;
    int* p = twoSum(nums, numsSize, target);
    printf("%d  ",*p);
}