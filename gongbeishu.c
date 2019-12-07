#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int i;
	for (i = 1; i ; i++) {
			if (i % a == 0 && i % b == 0) {
				printf("%d\n", i);
				break;
			}
	}
	system("pause");
	return 0;
}