#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int primenumber(int n) {
	int i = 1,t = 2;
		for (i = 2; i < n; i++) {
			t++;
			if (n%i == 0) {
				printf("这不是素数！\n");
				break;
			}
		}
	if(t==n)
		printf("这是一个素数！\n");
	return 0;
}
int main() {
	int n = 1;
	printf("请输入一个数：\n");
	scanf("%d", &n);
	printf("%d", primenumber(n));
	system("pause");
	return 0;
}