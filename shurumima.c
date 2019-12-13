#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char arr[] = { "1234" };
	char arr1[] = { "0" };
	//输入三次密码
	for (int i = 1; i < 4; i++) {
		printf("请输入密码：\n");
		scanf("%s", arr1);
		if (strcmp(arr,arr1)==0) {
			printf("密码正确！");
			break;
		}
		else printf("密码错误！请重新输入！\n");
	}
	system("pause");
	return 0;
}