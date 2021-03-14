////结构体的嵌套和传参、‘->’指针中的用法
//#include<stdio.h>
//typedef struct stu2
//{
//	char tel[12];
//}stu2;
//
//typedef struct stu1
//{
//	int age;
//	char sex[5];
//	stu2 tel;
//}stu1;
//
//void print1(stu1 s)
//{
//	printf("%d\n", s.age);
//	printf("%s\n", s.sex);
//	printf("%s\n", s.tel.tel);
//}
//
//void print2(stu1* s)
//{
//	printf("%d\n", s->age);
//	printf("%s\n", s->sex);
//	printf("%s\n", s->tel.tel);
//}
//
//int main()
//{
//	stu1 s1 = { 12, "男",{"15273728594"} };
//	print1(s1);
//	print2(&s1);
//	return 0;
//}