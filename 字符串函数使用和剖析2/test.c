#include <stdio.h>

////strcmp����  - �Ƚ������ַ���( >0 - 1�� <0 - -1�� ==0 - 0)
////��׼:
////1.��һ���ַ������ڵڶ����ַ������򷵻ش���0������
////2..��һ���ַ������ڵڶ����ַ������򷵻�0
////3..��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
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
//	//�����Ƚ��ǲ��еģ�ǰ�߱�ʾ'a'�ĵ�ַ�����߱�ʾ's'�ĵ�ַ
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

////�Լ���дstrcmp()����
//
//#include <assert.h>
//
//int my_strcmp(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;    //����0
//		}
//		str1++;
//		str2++;
//	}
//	//��һ��
//	//if (*str1 > *str2)
//	//{
//	//	return 1;    //����
//	//}
//	//else
//	//{
//	//	return -1;   //С��
//	//}
//	
//	//�����������ã�
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


////���Ȳ������Ƶ��ַ�������
////strcpy strcat strcmp (����'\0'������أ�����'\0'��ֹͣ )���˰�ȫ��
//int main()
//{
//	char arr1[5] = "abcd";
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////���������Ƶ��ַ�������
////strncpy strncat strncmp 
//
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 7);
//	//��Ҫ��׷�ӵ��Ǹ��ַ������Ȳ���ʱ����'\0'���䣨strncat���Ჹ'\0'����ֵ,�����Ჹһ��'\0'����ֹ��
//	printf("%s\n", arr1);
//	return 0;
//}

//strncmp()����
//1.����num���ַ���ԭ�ַ�����Ŀ��ռ�
//2.���Դ�ַ����ĳ���С��num���򿽱�������Ŀ��ĺ��׷��'\0'��֪��num��
