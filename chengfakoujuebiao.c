#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n = 1,m=9,t;
	printf("请输入乘法表的大小（如9）：");
		scanf("%d", &m);
	while (n <= m) {
		for (int i = n; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				t = i * j;
				printf("%d*%d =%d     ", i,j,t);
			}
			printf("\n");
		}
		n++;
	}
	system("pause");
	return 0;
}