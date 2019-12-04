#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void primenumber(int a) {
	int b = 0;
   for (int i = a - 1; i > 1; i--) {
		if (a % i == 0)
			b++;
	}
	if (b == 0) 
			printf("这是一个素数");
	else printf("不是素数");
}
int main() {
	int a=1,i;
	printf("请输入一个整数:");
	scanf("%d", &a);
	primenumber(a);
	printf("%d\n", a);
	system("pause");
	return a;
}