#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int  multiplicationtable(int n) {
	int i = 1, j = 1, t = 1, m = 1;
	while (m <= n) {
		//��
		for (; i <= m; i++) {
			//��
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
	printf("������˷���ķ�Χ��\n");
	scanf("%d", &n);
	printf("%d", multiplicationtable(n));
	system("pause");
	return 0;
}