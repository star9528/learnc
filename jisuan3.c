#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int count(int n, int m) {
	int sum = 0;
	for (int i = 1; i <=n; i++) {
		sum += m;
		m = (m%10) + m * 10;
	}
	printf("%d", sum);
	return 0;
}
int main() {
	int n = 1, m = 1;
	printf("请输入要计算的数字：\n");
	scanf("%d", &n);
	printf("请输入要计算的个数：\n");
	scanf("%d", &m);
	printf("%d", count(n, m));
	system("pause");
	return 0;
}