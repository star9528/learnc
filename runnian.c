#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//��������귵��1������������귵��0
int leadyear(int year) {
	if (year % 100 != 0) {
		//��ͨ����
		if (year % 4 == 0)
			return 1;
		else return 0;
	}
	//��������
	else if (year % 400 == 0) {
		return 1;
	}
	else  return 0;
}
int main() {
	int year;
	printf("������һ����ݣ�");
	scanf("%d", &year);
	leadyear(year);
	printf("%d", leadyear(year));
	system("pause");
	return 0;
}