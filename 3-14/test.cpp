//ʵ���ַ���֮��ĸ�ֵ�����Ż�����
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
//	assert(arr1 != NULL);//���ԣ�������ʽΪ����û�£�Ϊ����������
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
char* my_strcpy(char* arr1, const char* arr2)//const��������*arr2����*��arr2�м�������arr2
{
	char* ret = arr1;
	assert(arr1 != NULL);//���ԣ�������ʽΪ����û�£�Ϊ����������
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