#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//如果是闰年返回1，如果不是闰年返回0
int leadyear(int year) {
	if (year % 100 != 0) {
		//普通闰年
		if (year % 4 == 0)
			return 1;
		else return 0;
	}
	//世纪闰年
	else if (year % 400 == 0) {
		return 1;
	}
	else  return 0;
}
int main() {
	int year;
	printf("请输入一个年份：");
	scanf("%d", &year);
	leadyear(year);
	printf("%d", leadyear(year));
	system("pause");
	return 0;
}