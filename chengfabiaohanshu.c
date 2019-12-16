#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int  multiplicationtable(int n) {
	int i = 1, j = 1, t = 1, m = 1;
	while (m <= n) {
		//行
		for (; i <= m; i++) {
			//列
			for (j = 1; j <= m; j++) {
				t = i * j;
				printf("   %d*%d=%d", i, j, t);
			}
			printf("\n");
		}
		m++;
	}
}
int main() {
	int n = 1;
	printf("请输入乘法表的范围：\n");
	scanf("%d", &n);
	printf("%d", multiplicationtable(n));
	system("pause");
	return 0;
}