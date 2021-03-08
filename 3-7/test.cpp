//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		//p = p + 1;
//		p++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] -&arr[0]);//指针相减结果为两指针间元素的个数
//	return 0;
//}

////用指针方法设计strlen函数
//#include<stdio.h>
//int my_strlen(char* p)
//{
//	char* start = p;
//	char* end = p;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	
//	return end-start
//		;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

////用函数实现数组的逆置
//#include<stdio.h>
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		int temp = 0;
//		temp = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = temp;
//	}
//}
//int main()
//{
//	int arr[11] = { 1,2,3,4,5,6,7,8,9,10,11};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	return 0;
//
//}

////交换两个一样大的数组
//#include<stdio.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void exchange(int a[], int b[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = 0;
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}
//int main()
//{
//	int a[3] = { 1,2,3 };
//	int b[3] = { 4,5,6 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	print(a, sz);
//	print(b, sz);
//	exchange(a, b, sz);
//	print(a, sz);
//	print(b, sz);
//	return 0;
//}