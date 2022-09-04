#include <stdio.h>

////strcmp函数  - 比较两个字符串( >0 - 1； <0 - -1； ==0 - 0)
////标准:
////1.第一个字符串大于第二个字符串，则返回大于0的数字
////2..第一个字符串等于第二个字符串，则返回0
////3..第一个字符串小于第二个字符串，则返回小于0的数字
////VS2013
//// >  1
//// == 0
//// <  -1
////linux-gcc
//// >  >0
//// ==  0
//// <  <0
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	// if("abcdef" == "sqwer")
//	//这样比较是不行的，前者表示'a'的地址，后者表示's'的地址
//	//int ret = strcmp(p1, p2);
//	if (strcmp(p1, p2) > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1==p2\n");
//	}
//	else
//	{
//		printf("p1<p2\n");
//	}
//	return 0;
//}

////自己编写strcmp()函数
//
//#include <assert.h>
//
//int my_strcmp(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;    //等于0
//		}
//		str1++;
//		str2++;
//	}
//	//法一：
//	//if (*str1 > *str2)
//	//{
//	//	return 1;    //大于
//	//}
//	//else
//	//{
//	//	return -1;   //小于
//	//}
//	
//	//法二：（更好）
//	return (*str1 - *str2);
//}
//
//
//int main()
//{
//	char* pr1 = "abcdef";
//	char* pr2 = "zxcvbn";
//	int ret = my_strcmp(pr1, pr2);
//	printf("ret = %d\n", ret);
//	return 0;
//}


////长度不受限制的字符串函数
////strcpy strcat strcmp (都与'\0'紧密相关，遇到'\0'才停止 )不顾安全，
//int main()
//{
//	char arr1[5] = "abcd";
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////长度受限制的字符串函数
////strncpy strncat strncmp 
//
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 7);
//	//当要被追加的那个字符串长度不够时，用'\0'补充（strncat不会补'\0'当差值,但他会补一个'\0'来终止）
//	printf("%s\n", arr1);
//	return 0;
//}

//strncmp()函数
//1.拷贝num个字符从原字符串到目标空间
//2.如果源字符串的长度小于num，则拷贝完后后，在目标的后边追加'\0'，知道num个
