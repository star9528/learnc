#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	printf("������������:");
	int a, b;
	scanf("%d %d", &a, &b);
	int n=a;
	if (a > b)
		n = b;
	else n = b;
	for (int i = n; i > 0; i--) {
		if (a%i == 0 && b%i == 0) {
			printf("���Լ��%d\n", i);
			break;
		}
	}system("pause");
}
