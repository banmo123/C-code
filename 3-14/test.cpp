//实现字符串之间的赋值，并优化代码
#include<stdio.h>

//void my_strcpy(char *arr1,char* arr2)
//{
//	while (*arr1 != '\0' && *arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}

//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}

//void my_strcpy(char* arr1, char* arr2)
//{
//	if (arr1 != NULL && arr2 != NULL)
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//}

#include<assert.h>

//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL);//断言，如果表达式为真则没事，为假则函数报错
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
char* my_strcpy(char* arr1, const char* arr2)//const在左修饰*arr2，在*和arr2中间则修饰arr2
{
	char* ret = arr1;
	assert(arr1 != NULL);//断言，如果表达式为真则没事，为假则函数报错
	assert(arr2 != NULL);
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "################";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}