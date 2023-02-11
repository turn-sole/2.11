#include<stdio.h>
//#define A 2+2
//#define B 3+3
//#define C A*B
//int main()
//{
//	printf("%d\n", C);
//	return 0;
//}
//#define N 4
//
//#define Y(n) ((N+2)*n) 
//int main()
//{
//	int z = 2 * (N + Y(5 + 1));
//	printf("%d\n", z);
//	return 0;
//}
//#define  STRUCT_OFFSET(id, element)  ((unsigned long)(&(( struct id*)0)->element))
//#define SWAP(n) (((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1))
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void deletestr(char* str1, char* str2)
//{
//    int arr[100] = { 0 };
//    int i = 0;
//    int n = strlen(str2);
//    char* c = str1;
//    char* d = str2;
//    for (i = 0; i < n; i++)
//    {
//        arr[str2[i]] = 1;
//    }
//    while (*c)
//    {
//        if (arr[*c] == 1)
//        {
//            *c++;
//        }
//        *d++ = *c++;
//    }
//    *d = '\0';
//}
//int main()
//{
//    char a;
//    char b;
//    scanf("%s", &a);
//    scanf("%s", &b);
//    char str1[] = "&a";
//    char str2[] = "&b";
//    deletestr(str1, str2);
//    printf("%s\n", str2);
//    return 0;
//}
//void SaveContact(struct Contact* ps)
//{
//	FILE* pfWrite = fopen("Contact.txt", "wb");
//	if (!pfWrite)
//	{
//		printf("SaveContact::%s\n", strerror(errno));
//		return;
//	}
//	for (int i = 0; i < ps->size; i++)
//	{
//		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfWrite);
//	}
//
//	fclose(pfWrite);
//	pfWrite = NULL;
//	printf("保存成功!\n");
//}

//void LoadList(plist p) 
//{
//	FILE* fp = fopen(FileList, "rb+");
//	if (fp == NULL) 
//	{
//		return;
//	}
//	while (1) 
//	{
//		if (capacity_check(p) < 0) 
//		{
//			return;
//		}
//		int ret = fread(&p->_p[p->num], sizeof(message), 1, fp);
//		if (ret == 0) 
//		{
//			if (feof(fp)) 
//			{
//				printf("加载通讯录完毕\n");
//				break;
//			}
//			if (ferror(fp)) 
//			{
//				printf("加载联系人信息出错\n");
//				break;
//			}
//		}
//		p->num++;
//	}
//	fclose(fp);
//}

//#include<assert.h>
//#include<ctype.h>
//#include <stdlib.h>
//enum Status
//{
//	VALID,
//	INVALID
//}status = INVALID;
//int my_atoi(const char* str)
//{
//	int flag = 1;
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;//
//	}
//	while (isspace(*str))
//	{
//		str++;
//	}
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long n = 0;
//	while (*str != '\0')
//	{
//		if (isdigit(*str))
//		{
//			n = n * 10 + flag * (*str - '0');
//			if (n<INT_MIN || n>INT_MAX)
//			{
//				n = 0;
//				break;
//			}
//		}
//		else
//		{
//			break;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		status = VALID;
//	}
//	return (int)n;
//
//}
//int main()
//{
//	char arr[20] = "   -1234";
//	int ret = my_atoi(arr);
//	if (status == VALID)
//		printf("正常转化 %d\n", ret);
//	else
//		printf("非法转化 %d\n", ret);
//	printf("%d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}