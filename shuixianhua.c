#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int narcissisticnumber(int a) {
	double temp = 1;
	temp = pow(a % 10, 3) + pow(a / 10 % 10, 3) + pow(a / 100, 3);
	if (temp == a)
		printf("这是水仙花数！\n");
	else printf("这不是水仙花数！\n");
	return 0;
}
void main() {
	int a = 1;
	printf("请输入一个数（100-999）：\n");
	scanf("%d", &a);
	printf("%d", narcissisticnumber(a));
	system("pause");
}