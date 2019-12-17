#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void change(int a,int b) {
	int t = a;
	a = b;
	b = t;
}
int main() {
	int a = 1, b = 2;
	printf("请输入两个数:\n");
	scanf("%d%d", &a, &b);
	change(&a, &b);
	printf("a=%d,b=%d", a,b);
	system("pause");
	return 0;
}